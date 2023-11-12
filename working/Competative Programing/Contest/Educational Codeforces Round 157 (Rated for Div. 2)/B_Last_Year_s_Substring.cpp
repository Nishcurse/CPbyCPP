//  @nisuuisyours - 12-11-2023 07:33  
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);                                             
#define Testcases int t;cin >> t;while (t--)
/*DEBUG PART_________________________________________________________________________________________________*/
void _print(int a) {cerr<<a<<" ";}
void _print(ll a) { cerr<<a; }
void _print(bool a) {cerr<<a;}
void _print(float a) {cerr<<a;}
void _print(string a) {cerr<<a;}
void _print(double a) {cerr<<a;}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr<<endl;
#else
#define debug(x)
#endif 
/*DEBUG PART_____________________________________________________________________________________________________*/
int main() {
/* Config CODE___________________________________________________________________________________________________*/
NishuisYours
#ifndef ONLINE_JUDGE 
freopen("error.txt", "w", stderr); 
#endif
/*CONFIG PART END_________________________________________________________________________________________________*/
Testcases{
    ll n;cin>>n;
    string s;cin>>s;
    debug(s);
    if((s[0]=='2'&&s[1]=='0'&&s[n-1]=='0'&&s[n-2]=='2') || (s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0') || (s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[n-1]=='0') || (s[0]=='2'&&s[n-3]=='0'&&s[n-1]=='0'&&s[n-2]=='2') || (s[n-4]=='2'&&s[n-3]=='0'&&s[n-1]=='0'&&s[n-2]=='2')){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
return 0;
}
// (1000 * 1) - Tme Complexity is too gud actually better than loop approach
