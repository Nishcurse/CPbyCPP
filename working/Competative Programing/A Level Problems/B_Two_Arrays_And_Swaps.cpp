/*"1353B - Two Arrays And Swaps" By Utkarsh(NishKarsH)*/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define HeyNishuu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define TestCase int t;cin>>t; while (t--)
#define for(a,n) for(int i=a;i<n;i++) 
typedef long long int ll;
using namespace std;
int main () {
    HeyNishuu
    TestCase {
       ll a,b,sum=0;cin>>a>>b;
       ll Ara1[a];
       ll Ara2[a];
       for(0,a){
        cin>>Ara1[i];
       }
       for(0,a){
        cin>>Ara2[i];
       }
       sort(Ara1,Ara1+a);
       sort(Ara2,Ara2+a);
       while(b>0){
        if(Ara1[0]>Ara2[a-1]){
            b=1;
        }
       if(Ara1[0]<Ara2[a-1]){
        swap(Ara1[0],Ara2[a-1]);
       sort(Ara1,Ara1+a);
       sort(Ara2,Ara2+a);
       }
       b--;
       }
       for(0,a){
        sum+=Ara1[i];
       }
       cout<<sum<<"\n"; 
    }
    return 0;
}