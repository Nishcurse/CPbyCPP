/*Codeforces Beta Round 87 (Div. 2 Only)  */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    int stat;
    int passengers[a];

    for (int i=0;i<a;i++){
        cin>>b>>c;
        stat = stat -b ;
        stat = stat + c;
        passengers[i]=stat;
    }
    int n = sizeof(passengers) / sizeof(passengers[0]);
    cout<<*max_element(passengers, passengers + n)<<endl;
    return 0;
}