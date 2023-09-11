/* Problem ---> https://codeforces.com/problemset/problem/61/A */
/* @nishcurse */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b,out;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.length();i++){
        if (a[i]==b[i]){
            out.push_back('0');
        }else{
            out.push_back('1');
        }
    }
    cout<<out<<endl;
}
