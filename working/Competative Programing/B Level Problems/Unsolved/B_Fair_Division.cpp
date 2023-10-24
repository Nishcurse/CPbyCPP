/*" 1472B - Fair Division " By Nishu */
#include <bits/stdc++.h>
#define HeyNishuu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    HeyNishuu
    int t;cin>>t;
    while(t--) {
        // cout<<"i am Running \n";
        int c,c1=0,c2=0;cin>>c;
        int arr[c];
        for(int i=0;i<c;i++){
            cin>>arr[i];
            if(arr[i]==1){
                c1++;
            }else{
                c2++;
            }
        }
       if((c1&1)==0 && (c2&1) == 0){
        cout<<"YES\n";
       }else if ((c2&1)!=0){
        if(c1>=2 && (c1&1)==0){
            cout<<"YES\n";
        }else {
            cout<<"NO\n";
        }
    }else{
        cout<<"NO\n";
    }
}
    return 0;
}