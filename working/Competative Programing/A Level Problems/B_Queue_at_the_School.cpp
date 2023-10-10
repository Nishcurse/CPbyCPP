/*  Codeforces Round 163 (Div. 2)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string c;
    cin >> c;
    for(int j=0;j<b;j++){
    for (int i=0;i<a-1;i++) {
        if (c[i]=='B'&&c[i+1]=='G'){
            c[i]='G';
            c[i+1]='B';
            i=i+1;
        }
    }
    }
    cout<<c<<endl;
    return 0;
}