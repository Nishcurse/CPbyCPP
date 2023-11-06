// 1520D - @nishcurse -- 29/10/2023 
#include <bits/stdc++.h>
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int ll ;
using namespace std;
ll nc2(ll z){
  ll p =  (z*(z-1))/2;
  return p;
}
int main() {
  NishuisYours
  #ifndef ONLINE_JUDGE
  freopen("andar.txt","r",stdin);
  freopen("bahar.txt","w",stdout);
  #endif
  Testcases{
    ll n,p=0,cnt=0,max=0,output=0;cin>>n;
    ll v[n];
    for(int i=0;i<n;i++){
      cin>>p;
      v[i]=p-(i+1);
    }
    sort(v,v+n);
    // for(int i=0;i<n;i++){
    //   cout<<v[i]<<" ";
    // }
    for(int i=0;i<n-1;i++){
      if(v[i]==v[i+1]){ 
        cnt++;
        if(cnt>max){
          max=cnt;        }
      }else {
        output+=nc2(max+1);
        max=0;
        cnt=0;
      }
    }
    output+=nc2(max+1);
    cout<<output<<"\n";
  }
  return 0;
}