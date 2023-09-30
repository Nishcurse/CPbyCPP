/*"contest/1858/problem/A" By Nishu */
#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int 
using namespace std;
int main () {
    io
    int t;cin>>t;
    while(t--){
        ll a,b,c;cin>>a>>b>>c;
        if((a+c)>(b+c)){
            cout<<"First\n";
        }
        else if ((a+c)<(b+c)){
            cout<<"Second\n";
        }
        else{
            if((c&1)==0){
                cout<<"Second\n";

            }else{
                cout<<"First\n";
            }
        }
    }
    return 0;
}