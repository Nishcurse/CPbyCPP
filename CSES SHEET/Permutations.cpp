

// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int main() {
  HelloNishu
  lli n,e,o;cin>>n;
  if(n==1){
    cout<<1;
  }else if(n==4){
    cout<<"2 4 1 3";
  }else if(n<4){
    cout<<"NO SOLUTION\n";
  }else{
    if((n%2)==0){
      e=n;
      o=n-1;
      }else{
        o=n;
        e=n-1;
      }

      for(int i=e;i>=2;i=i-2){
        cout<<i<<" ";
      }
      for(int i=o;i>=1;i=i-2){
        cout<<i<<" ";
      }
    }
  return 0;
}