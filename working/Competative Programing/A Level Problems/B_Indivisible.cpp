#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        int arr[d];
        int sum = (d * (d + 1)) / 2;
        // cout<<"sum-"<<sum<<endl;
        if (sum % d != 0)
        {
            for (int i = 0; i < d; i++)
            {
                arr[i] = i + 1;
            }
            for (int i = 0; i < d; i += 2)
            {
                swap(arr[i], arr[i + 1]);
            }
            for (int i = 0; i < d - 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << arr[d - 1] << endl;
        }
        else if (d == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
