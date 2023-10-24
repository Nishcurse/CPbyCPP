/*1535A - Fair Playoff By NIshuuuuuuuu */
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        int b,c;
        b = max(arr[0],arr[1]); c = max (arr[2],arr[3]);
        sort(arr,arr+4);
        if((arr[3]+arr[2]) == (b+c)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;

}