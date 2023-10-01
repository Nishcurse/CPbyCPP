/*	-->1669A- Division?<-- By Utkarsh(Nishu) */
#include <bits/stdc++.h>
#define jaldiwahansehato ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main () {
    jaldiwahansehato
    int t,c;cin>>t;
    while(t--){
        cin>>c;
        if(c<1400){
            cout<<"Division 4\n";
        }else if(c>1399 && c<1600 ){
            cout<<"Division 3\n";
        }else if(c>1599 && c<1900 ){
            cout<<"Division 2\n";
        }else {
            cout<<"Division 1\n";
        }
    }
    return 0;
}