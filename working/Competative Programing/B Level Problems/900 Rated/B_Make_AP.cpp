
// For  Nishcurse -- 27 Aug , 2023 
#include <bits/stdc++.h>
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int ll;
using namespace std;
bool CheckMeCHeckMe (ll a ,ll b ,ll c){
  ll m1,m2,m3;
  bool t1=0,t2=0,t3=0;
  m1 = (2*b-c);
  m2 = (2*b - a);
  m3 = (a+c);
  if(m1>0 && m1%a==0){
    t1 = 1;
  }
  if(m2>0 && m2%c==0){
    t2 = 1;
  }
  if(m3>0 && m3%(2*b)==0){
    t3 = 1;
  }
  return (t1 || t2 || t3);
}
int main() {
  NishuisYours
  #ifndef ONLINE_JUDGE
  freopen("andar.txt","r",stdin);
  freopen("bahar.txt","w",stdout);
  freopen("galti.txt","w",stderr);
  #endif
  Testcases{
    ll a,b,c;cin>>a>>b>>c;
   if(CheckMeCHeckMe(a,b,c)){
    cout<<"YES\n";
   }else{
    cout<<"NO\n";
   }
  }
  return 0;
}