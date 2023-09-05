#include<iostream>
#include<string>
using namespace std;

int main() {
    int a = 0, b = 0,c =0; 
    string ChessResult;
    cin >> a;
    cin >> ChessResult;

    for (size_t i = 0; i < ChessResult.length(); i++) {
        bool d = ChessResult.at(i) == 'A';
        if (d==1) {
            b = b + 1;
        } else {
            c = c + 1;
        }
    }

    if (b > c) {
        cout << "Anton" << endl;
    } else if (c > b) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}
