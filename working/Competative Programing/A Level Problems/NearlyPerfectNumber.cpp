/*Codeforces Beta Round 84 (Div. 2 Only)*/
#include <bits/stdc++.h>
using namespace std;
int noofDigits(string a){
    int b = 0;
    string c,d;
    c="4";
    d="7";
    for(int i=0;i<a.length();i++){
        if(a[i]==c[0]){
            b++;
        }else if (a[i]==d[0]){
            b++;
        }
    }
    return b;
}
int main()
{
    string a;
    cin>>a;
    int c =noofDigits(a);
    if (c==7 || c==4){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
