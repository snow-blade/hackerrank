#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    string t;
    int j;
    double e;
    cin>>j;
    cin>>e;
    while(cin>>t){
        s+=t+' ';
        t="";
    }
    cout<<i+j<<"\n";
    printf("%.1f\n",(float)d+(float)e);
    cout<<s;
    return 0;
}
