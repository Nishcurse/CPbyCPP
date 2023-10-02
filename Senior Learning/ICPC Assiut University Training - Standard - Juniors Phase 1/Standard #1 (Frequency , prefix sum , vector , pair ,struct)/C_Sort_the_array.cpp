#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a;
    cin >> a;

    vector<long long int> arr;
    arr.reserve(a); 

    for (long long int i = 0; i < a; i++) {
        long long int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    for (const long long int& num : arr) {
        cout << num << " ";
    }

    return 0;
}
