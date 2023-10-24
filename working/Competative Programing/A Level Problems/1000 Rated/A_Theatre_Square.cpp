/*"1A - Theatre Square" By Utkarsh(NishKarsH)*/
#include <bits/stdc++.h>
#define HeyNishuu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define TestCase int t;cin>>t; while (t--)
#define ior(a,n) for(int i=a;i<n;i++) 
#define jor(a,n) for(int i=a;i<n;i++) 
typedef long long int ll;
using namespace std;
int main () {
    HeyNishuu
    ll l,b,a,lencover=0,bredcover=0;
    double lc,bc;
    cin>>l>>b>>a;
    lc = (double)l/a;
    lencover = l/a;
    if(lc>lencover){
        lencover++;
    }
    bc = (double)b/a;
    bredcover = b/a;
    if(bc>bredcover){
        bredcover++;
    }
    cout<<lencover*bredcover<<"\n";
    return 0;
}