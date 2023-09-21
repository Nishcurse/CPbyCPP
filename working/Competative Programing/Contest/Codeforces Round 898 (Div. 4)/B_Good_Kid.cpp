/*"contest/1873/problem/B" By Nishu ❤️ */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ;cin>>t;
    while(t--){
        int min=10,ou=1;
        int c; cin>>c;
        int arr[c];
        for (int i=0;i<c;i++){
            cin>>arr[i];
        }
        for(int i=0;i<c;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        for(int i=0;i<c;i++){
            if (arr[i]==min){
                arr[i]++;
                break;
            }
        }
        for(int i=0;i<c;i++){
            ou *= arr[i];
        }
        cout<<ou<<endl;
    }
    return 0;
}