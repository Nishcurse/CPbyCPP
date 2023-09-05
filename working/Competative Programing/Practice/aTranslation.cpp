#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    bool rani = true; 

    int lenA = a.length();
    int lenB = b.length();

    if (lenA != lenB) {
        rani = false; 
    } else {
        for (int i = 0; i < lenA; i++) {
            if (a[i] != b[lenA - i - 1]) {
                rani = false; 
                break; 
            }
        }
    }

    if (rani) {
        cout <<"YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
