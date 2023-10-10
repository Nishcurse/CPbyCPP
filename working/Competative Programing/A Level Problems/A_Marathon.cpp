/*"1692A - Marathon" By Nishu*/
#include <iostream>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main () {
    fastio
    long long t;cin>>t;
    while(t--){
        long long a,b,c,d;cin>>a>>b>>c>>d;
        cout<< (a<b) + (a<c) + (a<d) <<"\n";
}
}