// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int main() {
  HelloNishu
  Testcases{
    int n,sum=0;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int y;cin>>y;
        v.push_back(y);
    }
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            if(v[i-1]>0){
                sum+=v[i-1];
            }else {
                for(int j = i-1;j<0;j--){
                    if(v[i]+v[j])
                }
            }
        }
    }
  }

  return 0;
}