#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll size, sum, tampo;
        cin >> size;
        set <int> s;
        sum=0;
        tampo = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> tampo;
            s.insert(tampo);
            sum += tampo;
        }
        cout<<s.size()<<endl;
        cout << sum << endl;
        if (sum <= size || size ==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}