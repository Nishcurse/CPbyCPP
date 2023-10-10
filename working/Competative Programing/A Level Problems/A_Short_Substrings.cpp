/*"1367A - Short Substrings" By Nishu ❤*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--){
        string s;cin>>s;
        string you;
        you.push_back(s[0]);
        you.push_back(s[1]);
        for(int i=3;i<s.length();i=i+2){
            you.push_back(s[i]);
        }
        cout<<you<<"\n";
    }
    return 0;
}