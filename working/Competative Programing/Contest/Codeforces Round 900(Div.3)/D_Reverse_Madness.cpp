#include <bits/stdc++.h>
#define nishu ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long int in;
using namespace std;

void reverseSubstring(string &s, int a, int b) {
    while (a < b) {
        swap(s[a], s[b]);
        a++;
        b--;
    }
}

int main() {
    nishu
    in t;
    cin >> t;
    while (t--) {
        in n, k, q;
        cin >> n >> k;
        string s;
        cin >> s;
        
        vector<int> a1(k), a2(k);
        for (int i = 0; i < k; i++) {
            cin >> a1[i];
            cin >> a2[i];
        }
        
        cin >> q;
        vector<int> m(q);
        for (int i = 0; i < q; i++) {
            cin >> m[i];
        }
        
        vector<int> substringIdx(q, -1);
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < q; j++) {
                if (m[j] >= a1[i] && m[j] <= a2[i]) {
                    substringIdx[j] = i;
                }
            }
        }
        
        for (int i = 0; i < q; i++) {
            int j = substringIdx[i];
            if (j != -1) {
                int a = min(m[i], (a1[j] + a2[j] - m[i]));
                int b = max(m[i], (a1[j] + a2[j] - m[i]));
                reverseSubstring(s, a - 1, b - 1);
            }
        }
        
        cout << s << "\n";
    }
    return 0;
}
