/* "1399/A" by your nishu ❤️ */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int score = 0;
        char arr[10][10];

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (arr[i][j] == 'X') {
                    if (3 < i && i < 6 && 3 < j && j < 6) {
                        score += 5;
                    }
                    else if (2 < i && i < 7 && 2 < j && j < 7) {
                        score += 4;
                    }
                    else if (1 < i && i < 8 && 1 < j && j < 8) {
                        score += 3;
                    }
                    else if (0 < i && i < 9 && 0 < j && j < 9) {
                        score += 2;
                    }
                    else {
                        score += 1;
                    }
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}
