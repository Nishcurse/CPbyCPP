

// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int toHaKeNhi(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return 1;
    return 0;
}
int main() {
  HelloNishu
  string s,s1="0000000",s2="1111111";cin>>s;
//   cout<<toHaKeNhi(s1,s);
  if(s.length()<7){
    cout<<"NO\n";
  }else if( toHaKeNhi(s1,s)||toHaKeNhi(s2,s) ){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
  return 0;
}