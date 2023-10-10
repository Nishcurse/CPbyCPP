/* Codeforces Beta Round 97 (Div. 2) By Nishuuu*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,d,e;
    e=0;
    d=1;
    cin >> c;
    int arr[c];
    int arr1[c];
    for (int i=0;i<c;i++){
        cin>>arr[i];
    }
    for(int i=1;i<c+1;i++)
{
    for (int j=0;j<c;j++){
        if(arr[j]==i){
            arr1[i-1]=j+1;
        }
    }
}
for (int i=0;i<c;i++){
    cout<<arr1[i]<<" ";
}
    return 0;
}