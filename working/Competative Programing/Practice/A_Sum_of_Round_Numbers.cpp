/*Problem-->" https://codeforces.com/problemset/problem/1352/A" By Nishuuu */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c, printkardo;
    cin >> t;
    while (t--)
    {
        c = 0;
        string a;
        cin >> a;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != '0')
            {
                c++;
            }
        }
        cout << c << endl;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != '0')
            {
                cout << (a[i] - '0') * pow(10, a.length() - i - 1) << " ";
            }
        }
    cout <<endl;
    }
    return 0;
}