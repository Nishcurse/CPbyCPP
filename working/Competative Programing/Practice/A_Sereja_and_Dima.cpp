/*"problem/381/A" By Nishu ❤️ */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int c, p = 0, d = 0;
    cin >> c;
    vector<int> mein(c);

    for (int i = 0; i < c; i++) {
        cin >> mein[i];
    }

    for (int i = 1; i <= c; i++) {
        if (mein.front() > mein.back()) {
            if (i % 2 == 0) {
                p += mein.front();
            } else {
                d += mein.front();
            }
            mein.erase(mein.begin());
        } else {
            if (i % 2 == 0) {
                p += mein.back();
            } else {
                d += mein.back();
            }
            mein.pop_back();
        }
    }

    cout << d << " " << p;
    return 0;
}
