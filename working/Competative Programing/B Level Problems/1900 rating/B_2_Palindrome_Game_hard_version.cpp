#include <bits/stdc++.h>
#define Nishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
bool check(string s)
{
    ll ind = 0;
    for (ll k = 0; k < s.size(); k++)
    {
        ll i = s.size() - k - 1;
        if (s[k] != s[i])
            return false;
    }
    return true;
}
 int main(){
    Nishu
    ll t;cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt = 0;
        for (ll k = 0; k < s.size(); k++)
        {
            if (s[k] == '0')
                cnt++;
        }
        if (check(s))
        {
            if (cnt == 0)
            {
                cout << "DRAW" << endl;
                continue;
            }
            if (cnt % 2 == 0 || cnt == 1)
            {
                cout << "BOB" << endl;
                continue;
            }
            if (cnt % 2 == 1)
            {
                cout << "ALICE" << endl;
                continue;
            }
        }
 
        ll ind = 0;
        for (ll k = 0; k < s.size() && cnt == 2; k++)
        {
            string s1 = s;
            if (s[k] == '0')
                s1[k] = '1';
            if (check(s1))
            {
                ind = 1;
            }
        }
        if (ind == 1)
            cout << "DRAW" << endl;
        else
            cout << "ALICE" << endl;
    }
    return 0;
}