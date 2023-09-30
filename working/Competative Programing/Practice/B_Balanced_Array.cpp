/*"1343B - Balanced Array" By Utkarsh (Nishu) */
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main () {
    io
    int t;cin>>t;
    while(t--){
        int c;cin>>c;
        c=c/2;
        if((c&1)==0){
            cout<<"YES\n";
            for(int i=1;i<=c;i++){
                cout<<2*i<<" ";
            }for(int i=0;i<c-1;i++){
                cout<<2*i+1<<" ";
            }
            cout<<3*c-1<<"\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}