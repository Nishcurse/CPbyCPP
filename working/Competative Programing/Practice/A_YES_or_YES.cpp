/*contest/1703/problem/A" By Nishu ❤️*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        for (char &c : s) {
            c = toupper(c);
        }
        if (s == "YES") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
