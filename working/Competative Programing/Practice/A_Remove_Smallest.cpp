/*"problemset/problem/1399/A" By Nishu ❤️ You lil bitch pls work this time */
#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main () {
    int n ; cin>>n;
    while(n--){
        int c ; cin>>c ;
        bool check =false ;
        if(c==1){
            cout<<"YES"<<endl;
            continue;
        }
        vector<int> arr(c);
        for(int i=0;i<c;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<c-1;i++){
            if(arr[i+1]-arr[i]>1){
                check = true;
                break;
            }
        }
        if(check){
            cout<<"NO"<<endl;
        }else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}