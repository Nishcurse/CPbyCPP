/*Karle Bhai Hack*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int a ,b,c=0;cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        for(int i=0;i<a;i++){
            if(arr[i]==b){
                c++;
            }
        }
        if(c>0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}