/*	-->1374A - Required Remainder<-- By Utkarsh(Nishu)  */
#include <bits/stdc++.h>
#define jaldiwahansehato ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
using namespace std;
int main () {
    jaldiwahansehato
    ll t;cin>>t;
    while(t--) {
        ll a,b,c,k,temp;cin>>a>>b>>c;
        if(a>c && b==0){
            cout<<0<<"\n";
        }else{
            temp = c%a-b;
            if(temp==0){
                cout<<c<<"\n";
            }else if(temp>0){
                cout<<c-temp<<"\n";
            }else{
                cout<<c-(a+temp)<<"\n";
            }
        }
    }
    return 0;
}