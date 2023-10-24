/*"1360B - Honest Coach" For by nishuu*/
#include <bits/stdc++.h>
#define HeyNishuu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define TestCase int t;cin>>t; while (t--)
// #define for(a,n) for(int i=a;i<n;i++) 
// #define maanja(a,n) for(int j=a;j<n;j++) 
typedef long long int ll;
using namespace std;
int main () {
    HeyNishuu
    TestCase {
        ll a;cin>>a;
        ll arr[a];
        ll testugagetsu = 1000000000;
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(abs(arr[i]-arr[j])<testugagetsu && i!=j){
                    testugagetsu = abs(arr[i]-arr[j]);
                }
            }
        }
        cout<<testugagetsu<<"\n";
    }
    return 0;
}