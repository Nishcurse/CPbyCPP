/*"58A - Chat room" Solution all  Copyrights -  Nishu */
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int main() {
  HelloNishu
  string s,p="hello";cin>>s;
  int mc = 0;
  for(int i=0;i<s.length();i++){
    if(mc==5){
        break;
    }
    if(s[i]==p[mc]){
        mc++;
    }
  }
  if(mc==5){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
  return 0;
}