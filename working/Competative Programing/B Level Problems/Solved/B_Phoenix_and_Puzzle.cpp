#include <bits/stdc++.h>
#define HeyNishuu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define TestCase int t;cin>>t; while (t--)
typedef long long int ll;
using namespace std;
bool isPerfectSquare(long double x)
{
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
int main () {
    HeyNishuu
    TestCase {
        int c;cin>>c;
        if(c%2==0 && isPerfectSquare(c/2)){
            cout<<"YES\n";
        }else if (c%4==0 && isPerfectSquare(c/4)){
            cout<<"YES\n";

        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}