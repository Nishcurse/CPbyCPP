/*	431A - Black Square By Utkarsh(Nishu) */
#include <bits/stdc++.h>
#define jaldiWahanSeHato ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main() {
    jaldiWahanSeHato
    int a,b,c,d,sum=0;cin>>a>>b>>c>>d;
    string s;cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            sum += a;
        }else 
        if(s[i]=='2'){
            sum += b;
        }else 
        if(s[i]=='3'){
            sum += c;
        }else {
            sum+=d;
        }
    }
    cout<<sum<<"\n";
    return 0;
}