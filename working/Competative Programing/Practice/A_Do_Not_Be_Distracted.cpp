#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        bool raju = false;
        int c;cin>>c;
        string s ;cin>>s;
        for (int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                continue;
            }else{
                for(int j=i+1;j<s.length();j++){
                    if(s[i]==s[j]){
                        raju = true;
                        break;
                    }
                }
            }
        }
        if(raju){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}