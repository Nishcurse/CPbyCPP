/* Codeforces Round 109 (Div. 2) -->"https://codeforces.com/problemset/problem/155/A" By Nishuu*/
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,min,max,you;
    you=0;
    cin>>n;
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    min=arr[0];
    max =arr[0];
     for (int i=1 ; i<n ; i++){
        if(arr[i]>max){
            you++;
            max=arr[i];
        }
        if (arr[i]<min){
            you++;
            min=arr[i];
        }
     }
     cout<<you<<endl;
    return 0;
}