/*"1551A - Polycarp and Coins" Jay Bajrang Bali*/
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
        int b,c;cin>>b;
        c=b/3;
        if(b-c*3==0){
            cout<<c<<" "<<c<<"\n";
        }else if(b-c*3==1){
            cout<<c+1<<" "<<c<<"\n";
        }else if(b-c*3==2){
            cout<<c<<" "<<c+1<<"\n";
        }
    }
    return 0;
}