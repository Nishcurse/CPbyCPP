/* 1433A - Boring Apartments" By Utkarsh(Nishu_--_
                                               __  )*/
#include <bits/stdc++.h>
#define ll long long
#define nishu                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    nishu int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        ans += 10 * ((s[0] - '0') - 1);
        ans += (s.length() * (s.length() + 1)) / 2;
        cout << ans << "\n";
    }

    return 0;
}