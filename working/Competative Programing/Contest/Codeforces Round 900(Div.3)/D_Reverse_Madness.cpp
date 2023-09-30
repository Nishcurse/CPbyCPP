#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;

        int arr[b];
        int ar[b];

        for (int i = 0; i < b; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < b; i++) {
            cin >> ar[i];
        }

        int d;
        cin >> d;
        int p[d];
        for (int i = 0; i < d; i++) {
            cin >> p[i];
        }

        for (int i = 0; i < d; i++) {
            int e, f, g;
            if (i < b) {
                int q = min(arr[i], ar[i]);
                int r = max(arr[i], ar[i]);
                if (q - 1 >= 0 && r - 1 < s.length()) {
                    string x, y, z;
                    e = arr[i] + ar[i] - p[i];
                    f = min(p[i], e);
                    g = max(p[i], e);
                    x = s.substr(0, q - 1);
                    y = s.substr(q - 1, r - q + 1);
                    z = s.substr(r);
                    reverse(y.begin(), y.end());
                    s = x + y + z;
                }
            } else {
                int q = min(arr[b - 1], ar[b - 1]);
                int r = max(arr[b - 1], ar[b - 1]);
                if (q - 1 >= 0 && r - 1 < s.length()) {
                    string x, y, z;
                    e = arr[b - 1] + ar[b - 1] - p[i];
                    f = min(p[i], e);
                    g = max(p[i], e);
                    x = s.substr(0, q - 1);
                    y = s.substr(q - 1, r - q + 1);
                    z = s.substr(r);
                    reverse(y.begin(), y.end());
                    s = x + y + z;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
