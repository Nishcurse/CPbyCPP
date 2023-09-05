/* Codeforces Round 126 (Div. 2) By Nishuuu*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double ar1[n];
    for (int i = 0; i < n; i++)
    {
        ar1[i] = arr[i] / 100.00000;
    }
    double z = 0;
    for (int i = 0; i < n; i++)
    {
        z += ar1[i];
    }
    double x = (z / n)*100;
    cout <<fixed<<setprecision(12) <<x << endl;
    return 0;
}