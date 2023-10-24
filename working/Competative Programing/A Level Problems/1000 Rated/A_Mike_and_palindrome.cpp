/*" 798A - A.Mike and Palindrome " By Utkarsh(NishKarsH)*/
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
    string s;cin>>s;
    int kaamkiCheez = 0 ;
    for(0,s.length()/2){
        // printf("Checking %d and %d \n",s[i],s[s.length()-i-1]);
        if(s[i]!=s[s.length()-i-1]){
            kaamkiCheez++;
        }
    }
    if((s.length()&1)!=0 && kaamkiCheez == 0 ){
        cout<<"YES\n";
    }else if(kaamkiCheez==1){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

    return 0;
}