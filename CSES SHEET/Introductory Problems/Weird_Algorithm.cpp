// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int main() {
  HelloNishu
  lli c;cin>>c;
  cout<<c<<" ";
  while(c!=1){
    if((c&1)==0){
        c=c/2;
        cout<<c<<" ";
    }else{
        c=3*c+1;
        cout<<c<<" ";
    }
  }

  return 0;
}