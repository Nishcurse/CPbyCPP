

#include <bits/stdc++.h>
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int ll ;
using namespace std;
int main() {
  NishuisYours
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  Testcases{
    ll ch , ke , ml;cin>>ch>>ke>>ml;
    if(ch>ke){
        cout<<ch<<"\n";
    }else{
        if(ml>(ke-ch)){
            ml = (ke-ch);
        }
        cout<<ke+(ke-ch)-ml<<"\n";
    }
  }
  return 0;
}