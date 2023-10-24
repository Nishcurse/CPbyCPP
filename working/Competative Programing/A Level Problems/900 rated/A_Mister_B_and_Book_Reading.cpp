/*"820A - Mister B and Book Reading" By Utkarsh(NishKarsH)*/
#include <bits/stdc++.h>
#define HeyNishuu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define TestCase int t;cin>>t; while (t--)
#define for(a,n) for(int i=a;i<n;i++) 
typedef long long int ll;
using namespace std;
int main () {
    HeyNishuu
    int n,ppd,pmax,pin,prev,pdone=0,result=0;
    cin>>n>>ppd>>pmax>>pin>>prev;
    pdone += ppd;
    result += 1;
    while(pdone<n){
        if(ppd+pin>=pmax){
            ppd = pmax;
            pdone += ppd - prev;
            result +=1; 
        }else{
            ppd += pin;
            pdone += ppd - prev;
            result += 1; 
        }
    }
    cout<<result<<"\n";
    return 0;
}