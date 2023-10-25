// Ciklu's CSES SHEET Solution ltd.
#include <bits/stdc++.h>
#define ChiklU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long int ll;
using namespace std;
int main() {
    ChiklU
    string s;ll max=-1,streak=0;cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            streak ++;
        }else{
            if(streak>max){
                max=streak;
            }
            streak = 0;
        }
    }
    cout<<max+1<<"\n";
}
