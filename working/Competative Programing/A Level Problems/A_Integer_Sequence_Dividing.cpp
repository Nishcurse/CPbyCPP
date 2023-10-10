/*  Codeforces Round 895 (Div. 3)--(https://codeforces.com/contest/1102/problem/A)> By Nishuuu */
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int r = n%4;
	if (r == 0 || r == 3) {
		cout << 0 << endl;
	} else {
		cout << 1 << endl;
    }
	return 0;
}