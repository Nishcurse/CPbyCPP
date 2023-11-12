//NISHU________________________________________________________________________________________________________
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);                                             
#define Testcases int t;cin >> t;while (t--)
// DEBUG PART___________________________________________________________________________________________________
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
//DEBUG PART_____________________________________________________________________________________________________
int sumtindesx(string s,int t){
    int sum=0;
    for(int i=0;i<t;i++){
        sum+=(s[i]-'0');
    }
    return sum;
}
int rrr[6][46];
int main() {
// Config CODE___________________________________________________________________________________________________
NishuisYours
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout); 
freopen("error.txt", "w", stderr); 
#endif
//CONFIG PART END_________________________________________________________________________________________________
ll n,p=0;cin>>n;
 string arr[n];
for(int i=0;i<n;i++){
    ll sum=0;
    cin>>arr[i];
    string s = arr[i];
    for(int j=0;j<s.length();j++){
        sum+=(s[i]-'0');
    }
    rrr[s.length()][sum]++;
}
debug(rrr[2][2]);




    return 0;
}