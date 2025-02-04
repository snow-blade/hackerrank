#include <bits/stdc++.h>

using namespace std;
vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<long long int> arr) {
long long int sum=0;
sort(arr.begin(),arr.end());
long long int max=accumulate(arr.begin()+1,arr.end(),sum);
long long int min=accumulate(arr.begin(),arr.end()-1,sum);
cout<<min<<" "<<max;
}

int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<long long int> arr(5);

    for (int i = 0; i < 5; i++) {
        long long int arr_item = (long long int)stoll(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
