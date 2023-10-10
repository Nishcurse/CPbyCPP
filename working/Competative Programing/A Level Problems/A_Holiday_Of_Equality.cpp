/*"problem/758/A" By Nishu ❤️ */
#include <bits/stdc++.h> 
using namespace std;
int main () {
    int t,sum=0;cin>>t;
    int max = -1;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    if(t==1){
        cout<<0;
    }else{
    for (int i=0;i<t;i++){
        sum += max-arr[i];
    }
    cout<<sum;
    }
    return 0;
}