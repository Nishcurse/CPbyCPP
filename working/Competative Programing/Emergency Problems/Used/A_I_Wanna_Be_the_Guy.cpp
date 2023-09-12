/* problem-->"https://codeforces.com/problemset/problem/469/A" */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b;
    
    set<int> BagheBillo;
    
    for (int i = 0; i < b; i++) {
        int num;
        cin >> num;
        BagheBillo.insert(num);
    }
    
    cin >> c;
    
    for (int i = 0; i < c; i++) {
        int num;
        cin >> num;
        BagheBillo.insert(num);
    }
    
    if (BagheBillo.size() == a) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    
    return 0;
}