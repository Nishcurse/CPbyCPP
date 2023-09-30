/*"703A - Mishka and Game" By Utkarsh(nishu)*/
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int  main() {
    fastio
    int r,m=0,c=0;cin>>r;
    while(r--){
        int a,b;cin>>a>>b;
        if(a==b){
            continue;
        } 
        else if(a>b){
            m++;
        }else{
            c++;
        }
    // cout<<m<<" "<<c;
    }
    if(m==c){
        cout<<"Friendship is magic!^^";
    }else if (m<c){
        cout<<"Chris";
    }else{
        cout<<"Mishka";
    }
    return 0;
}