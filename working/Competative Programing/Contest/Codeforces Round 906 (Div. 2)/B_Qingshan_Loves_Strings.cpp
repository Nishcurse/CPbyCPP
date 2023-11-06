#include <bits/stdc++.h>
#define NishuisYours                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define Testcases \
    int t;        \
    cin >> t;     \
    while (t--)
typedef long long int ll;
using namespace std;
int goodstring(string s)
{
    int reutn = 1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            reutn = 0;
            break;
        }
    }
    return reutn;
}
int goodstringtype(string t)
{
    int retun;
    if (t[0] == '0' && t[t.length() - 1] == '0')
    {
        retun = 100;
    }
    else if (t[0] == '1' && t[t.length() - 1] == '1')
    {
        retun = 111;
    }
    else if (t[0] == '1' && t[t.length() - 1] == '0')
    {
        retun = 110;
    }
    else if (t[0] == '0' && t[t.length() - 1] == '1')
    {
        retun = 101;
    }
    return retun;
}
int main()
{
    NishuisYours
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Testcases
    {
        int m, n;
        cin >> m >> n;
        string s, t;
        cin >> s >> t;
        int a = goodstring(s), b = goodstring(t);
        int type = goodstringtype(t);
        int otype = 0, ltype = 0;
        // cout<<type<<"\n";
        if (a == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    if (s[i] == '0')
                    {
                        otype++;
                    }
                    else
                    {
                        ltype++;
                    }
                }
            }
            if (otype > 0 && ltype > 0)
            {
                cout << "No\n";
            }
            else
            {
                if (b == 0)
                {
                    cout << "No\n";
                }
                else
                {
                    if (otype > 0 && type == 111)
                    {
                        cout << "Yes\n";
                    }
                    else if (ltype > 0 && type == 100)
                    {
                        cout << "Yes\n";
                    }
                    else
                    {
                        cout << "No\n";
                    }
                }
            }
        }
    }
    return 0;
}