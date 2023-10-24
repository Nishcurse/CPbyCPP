// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int main() {
  HelloNishu
  Testcases{
    lli n;cin>>n;
    lli arr[n];lli max=0;
    for(int i=0;i<n;i++){
        max++;
        cin>>arr[i];
        if(arr[i]==max){
            max++;
        }
    }
    cout<<max<<"\n";
  }

  return 0;
}