#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b,c,sum=0;cin>>a>>b>>c;
        int jf[a],gf[b];
        for(int i=0;i<a;i++){
            cin>>jf[i];
        }
        for(int i=0;i<a;i++){
            cin>>gf[i];
        }
        sort(jf,jf+a);
        sort(gf,gf+b);
        if(jf[0]>gf[b-1] && (c&1)==0){
            int temp = jf[0];
            jf[0] = gf [b-1];
            gf[b-1] = temp;
        }else{
            int temp = jf[a-1];
            jf[a-1] = gf [0];
            gf[0] = temp;
        }
        for(int i=0;i<a;i++){
            jf[i];
        }
        for(int i=0;i<a;i++){
            gf[i];
        }
        for(int i=0;i<a;i++){
        sum += jf[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}