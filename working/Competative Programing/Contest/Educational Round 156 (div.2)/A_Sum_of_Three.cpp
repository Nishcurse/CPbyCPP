/*"ProBlem  " By Utkarsh(NishKarsH)*/
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
    TestCase {
        int a;cin>>a;
        if(a<7 || a==9){
            cout<<"NO"<<"\n";
        }else{
                cout<<"YES"<<"\n";
            if(a%3==0){
                cout<<1<<" "<<4<<" "<<a-5<<"\n";
            }else{
                cout<<1<<" "<<2<<" "<<a-3<<"\n";
            }
        }
    }
    return 0;
}