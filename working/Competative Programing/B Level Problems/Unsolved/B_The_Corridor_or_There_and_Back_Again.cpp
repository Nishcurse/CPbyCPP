/* "1872B - The Corridor or There and Back Again" By Utkarsh(NishKarsH)*/
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
        int c;cin>>c;
        int s[c];
        for(0,c){
            int a,b;cin>>a>>b;
            if((b&1)==0){
                s[i] = a + ((b/2) -1);
            }else {
                s[i] = a + (b/2);
            }
        }
        sort(s,s+c);
        cout<<s[0]<<"\n"; 
    }
    return 0;
}