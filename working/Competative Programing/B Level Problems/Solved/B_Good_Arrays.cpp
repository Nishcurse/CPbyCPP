/* -->1856B - Good Arrays<--  By Utkarsh (Nishuu) 30 Sept'23*/ 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long int t;
    cin >> t;
    
    while (t--) {
        long long int n;
        cin >> n;
        
        vector<long long int> a(n);
        long long int sum = 0, o = 0;
        
        for (long long int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 1) {
                o++;
            }
        }

        if (n == 1 || sum < n - 1 + o) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
