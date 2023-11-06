// 1520D - @nishcurse -- 30/10/2023 
#include <bits/stdc++.h>
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int ll ;
using namespace std;
int main() {
  NishuisYours
  #ifndef ONLINE_JUDGE
  freopen("andar.txt","r",stdin);
  freopen("bahar.txt","w",stdout);
  #endif
  Testcases{
    int n,zero=0;cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;i++){
      if(s[i]=='0'){
        zero++;
      }
    }
    if(zero>1 && n%2!=0 && s[n/2]=='0'){
      cout<<"ALICE\n";
    }else{
      cout<<"BOB\n";
    }
  }
  return 0;
}