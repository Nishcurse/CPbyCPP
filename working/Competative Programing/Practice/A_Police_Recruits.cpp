/*Codeforces Round 244 (Div. 2)--> " https://codeforces.com/problemset/problem/427/A" By Nishuuu */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int c,sum,d;
    d=0;
    sum = 0;
    cin>>c;
    int arr [c];
    for (int i=0; i< c ; i++){
        cin>>arr[i];
    }
    for(int i=0;i<c;i++){
        cout<<"sum: "<<sum;
        if(arr[i]==-1 && sum>0){
            sum = sum - 1 ;
        }
        else if (arr[i]==-1 && sum<=0){
            d++;
        }
        if(arr[i]>0){
            sum = sum + arr[i]; 
        }
        cout<<" checking :"<<arr[i]<<" doing"<<d<<endl;
    }
    cout<<d<<endl;
    return 0;
}