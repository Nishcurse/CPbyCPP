/* Codeforces Round 375 (Div. 2) */
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[3] ={a,b,c};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr + n);
    int diff12 = arr[0]-arr[1];
    int diff23 = arr[1]-arr[2];
    cout<<diff12+diff23<<endl;
}