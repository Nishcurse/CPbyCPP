/* "1807A - Plus or Minus" By Utkarsh(NishKarsH)*/
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
        int a,b,c;cin>>a>>b>>c;
        if((a-b)==c){
            cout<<"-\n";
        }else{
            cout<<"+\n";
        }
    }
    return 0;
}