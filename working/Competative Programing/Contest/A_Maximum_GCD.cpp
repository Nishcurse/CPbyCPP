#include <bits/stdc++.h>
#define HeyNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,max=0;cin>>a;
        for(int i=1;i<a+1;i++){
            for(int j=1;j<a+1;j++){
                if( _gcd(i, j)>max && i!=j){
                    max = _gcd(i,j);
                }
            }
        }
    }
    return 0;
}