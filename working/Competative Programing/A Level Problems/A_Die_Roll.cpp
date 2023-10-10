/*"9A - Die Roll" By Utkarsh(nishu)*/
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    fastio
    int a, b, c;
    cin>>a>>b;
    c = max(a, b);
    a = 6 - c + 1;
    b = 6;\
    if (a % 3 == 0)
    {
        a = a / 3;
        b = b/3;
    }
    if ((a & 1) == 0)
    {
        a = a / 2;
        b = b/2;
    }
    cout<<a<<"/"<<b;
    return 0;
}