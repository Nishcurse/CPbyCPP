/*A-Count Numbers By Utkasrh(Nishu❤️) */
#include <bits/stdc++.h>
#define nishu ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long int in;
using namespace std;
int main() {
    nishu
    in a,b;cin>>a>>b;
    in arr[a] = {};
    while(b--){
        int c,d; cin>>c>>d;
        if(c==1){
            arr[d-1]+= 1;
        }else{
            cout<<arr[d-1]<<"\n";
        }
    }
    return 0;
}