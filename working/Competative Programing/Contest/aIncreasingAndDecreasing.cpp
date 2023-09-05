/* Harbour.Space Scholarship Contest 2023-2024 (Div. 1 + Div. 2) */
#include <iostream>
using namespace std;
int main()
{
    int x, y, n, m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> n;
        int arr[n];
        arr[0] = x;
        arr[n - 1] = y;
        for (size_t i = 1; i < n - 1; i++)
        {
            arr[n - i - 1] = arr[n - i] - i;
        }
        int z = arr[1] - arr[0];
        int p = arr[2] - arr[1];
        if (z > p)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout<<endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
