/*"ProBlem  " By Utkarsh(NishKarsH)*/
#include <bits/stdc++.h>
#define HeyNishuu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
typedef long long int ll;
using namespace std;
int main () {
    HeyNishuu
    string s;cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    for(int i=0;i<s.length();i++){
      if(s[i]=='a'|| s[i]=='o'|| s[i]=='y'|| s[i]=='e'|| s[i]=='u'|| s[i]=='i'){
        continue;
      }else{
        cout<<'.'<<s[i];
      }
    }
    return 0;
}