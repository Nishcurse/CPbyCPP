/*"A-Jellyfish and Undertale" By Utkarsh(Nishu)*/
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int ll;
int main() {
    io
    int t;cin>>t;
    while(t--){
        ll a,b,c,sum=0;cin>>a>>b>>c;
        ll arr[c];
        for(int i=0;i<c;i++){
            cin>>arr[i];
            if(arr[i]>=a){
                sum+=a-1;
            }else{
                sum+=arr[i];
            }
        }
        cout<<sum+b<<"\n";
    }

    return 0;
}