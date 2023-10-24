// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return 1;
    return 0;
}
int main() {
  HelloNishu
  Testcases{
    int a,b,steps=0;cin>>a>>b;
    string s1;cin>>s1;
    string s2;cin>>s2;
    while(s2.length()>s1.length()){
        s1+=s1;
        steps++;
    }
    // cout<<s1<<"\n";
    if(isSubstring(s2,s1)){
        cout<<steps<<"\n";
    }else{
        steps++;
        s1+=s1;
        if(isSubstring(s2,s1)){
            cout<<steps<<"\n";
        }else{
        cout<<-1<<"\n";
        }
    }
  }
  return 0;
}