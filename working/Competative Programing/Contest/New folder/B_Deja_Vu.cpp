#include <bits/stdc++.h>
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int ll ;
using namespace std;
int main() {
  NishuisYours
  Testcases{
    ll a,b,mc=0;
    cin >> a >> b;
    ll victim[a], modi[b];
    for(int i = 0; i < a; i++) {
        cin >> victim[i];
    }
    for(int i = 0; i < b; i++) {
        cin >> modi[i];
    }
    for(int i = 0; i < b; i++) {
        mc = 1LL << modi[i]; 
        for(int j = 0; j < a; j++) {
            if (victim[j] % mc == 0) {
                victim[j] += mc / 2;
            }
        }
    }
    for(int i = 0; i < a; i++) {
        cout << victim[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}
