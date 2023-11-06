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
  unordered_set<ll> Set;
    ll n ;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        Set.insert(arr[i]);
    }
    if(Set.size()==1){
        cout<<"Yes\n";
    }else if(Set.size()==2){
        vector<ll> v;
        for (int i : Set) {
        v.push_back(i);
    }
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==v[0]){
            count1++;
        }else if(arr[i]==v[1]){
            count2++;
        }
    }
    if(n%2==0){
        if(count1==count2){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }else{
        if(abs(count1-count2)==1){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    }else{
        cout<<"No\n";
    }
  }
  return 0;
}