/*link-" https://codeforces.com/problemset/problem/144/A" */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, Chotawala, Badawala, i1, i2;
    Badawala = -2;
    Chotawala = 102;
    cin >> c;
    int arr[c];
    for (int i = 0; i < c; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < c; i++)
    {
        if (arr[i] > Badawala)
        {
            Badawala = arr[i];
        }
        if (arr[i] < Chotawala)
        {
            Chotawala = arr[i];
        }
    }
    for (int i = 0; i < c; i++)
    {
        if (arr[i] == Badawala)
        {
            i1 = i;
            break;
        }
    }
    for (int i = c - 1; i >= 0; i--)
    {
        if (arr[i] == Chotawala)
        {
            if (i < i1)
            {
                i2 = c - i - 2;
            break;
            }
            else
            {
                i2 = c - i - 1;
                break;
            }
        }
    }
        cout << i1+i2 << endl;
        return 0;
}