/*"69A - Young Physicist" By Nishu*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int f,x=0,y=0,z=0;cin>>f;
    while(f--){
        int a,b,c;cin>>a>>b>>c;
        x+=a;y+=b;z+=c;
    }
    if(x==0&&y==0&&z==0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
