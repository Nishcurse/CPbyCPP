/* " 1791A - Codeforces Checking" By Utkarsh(Nishu_--_
                                                   __  )*/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
typedef long long ll;
#define HeyNishu                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    HeyNishu int t;
    cin >> t;
    while (t--)
    {
        bool isYes = 0;
        string b;
        char s;
        cin >> s;
        b = "codefrs";
        for (int i = 0; i < b.length(); i++)
        {
            if (s == b[i])
            {
                isYes = 1;
                break;
            }
        }
        if(isYes){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}