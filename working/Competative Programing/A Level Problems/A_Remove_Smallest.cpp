/*"problemset/problem/1399/A" By Nishu ❤️ Trying to optimising the code*/
#include<bits/stdc++.h>
#pragma GCC target("sse4")
#define in long long 
using namespace std;
int main() {
    in t;cin>>t;
    while(t--){
        in c;cin>>c;
        int a =  1 ;
        int r[c];
        for(in i=0;i<c;i++){
            cin>>r[i];
        }
        sort(r,r+c);
        for(in i=1;i<c;i++){
            if(r[i]-r[i-1]>1){
                a=0;
            }
        }
        if(a!=0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}



