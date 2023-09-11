/*Codeforces Round 267 (Div. 2)*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    m=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(b-a>1){
            m=m+1;
        }
    }
    cout<<m<<endl;
    return 0;
}