/*problem-->"https://codeforces.com/problemset/problem/581/A" By Nishuu */
#include <bits/stdc++.h>
using namespace std ;
int main (){
    int a,b; cin>>a>>b;
    cout<<min(a,b)<<" "<<abs((a-b)/2);
    return 0;
    }