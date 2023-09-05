// Codeforces Round 337 (Div. 2) BY NISHUUUUUU
#include <bits/stdc++.h>
using namespace std;
int main(){
    int c,out;
    out=0;
    cin>>c;
    int s = c/4;
    for (int i = 1; i <= s; i++)
    {
        int d = c - 2*i;
        if (d%2==0 && (c/2) != (c-2*i)){
            out += 1;
        }
    }
    cout<<out<<endl;
    return 0;
}