// NisUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        vector<pair<int, int>> chalo(c);
        for (int i = 0; i < c; i++)
        {
            cin >> chalo[i].first;
            chalo[i].second = i;
        }
        sort(chalo.begin(), chalo.end());
        vector<int> output(c);
        for (int i = 0; i < c; i++)
        {
            output[chalo[i].second] = c - i;
        }
        for (int i : output)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}