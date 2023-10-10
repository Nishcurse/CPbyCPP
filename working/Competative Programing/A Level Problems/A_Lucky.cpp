/* "1676A - Lucky?"  By Utkarsh(Nishu)*/
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main () {
    io
    int t;cin>>t;
    while (t--){
        int b,f=0,l=0,temp;cin>>b;
        for(int i=0;i<6;i++){
            temp = b%10;
            b=b/10;
            if(i<3){
                l+=temp;
            }else{
                f+=temp;
            }
        }
        if(l==f){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}