/* " 1360A - Minimal Square " By Utkarsh(Nishu_--_
                                               __  )*/
#include <bits/stdc++.h>
#define HeyNishu                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
    #pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
typedef long long int ll;
using namespace std;
int main() {
    HeyNishu
    ll  t;cin>>t;
    while(t--){
        ll a,b,c,a1,b1,c1,c2;cin>>a>>b;
        a1=2*a;b1=b*2;
        c1=max(a1,b);
        c2=max(b1,a);
        c= min(c1,c2);
        cout<<c*c<<"\n";
}
return 0;
}