// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int main() {
  HelloNishu
  lli n,steps=0;cin>>n;
  vector<lli> arr;
  for(int i=0;i<n;i++){
    int kya;cin>>kya;
    arr.push_back(kya);
  }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }

  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        steps += (arr[i]-arr[i+1]);
        arr[i+1]=arr[i];
    }
  }
  cout<<steps<<"\n";
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
}