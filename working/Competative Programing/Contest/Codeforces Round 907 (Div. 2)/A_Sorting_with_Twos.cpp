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
int main() {
// Config CODE___________________________________________________________________________________________________
NishuisYours
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout); 
freopen("error.txt", "w", stderr); 
#endif
//CONFIG PART END_________________________________________________________________________________________________
NishuisYours
  Testcases{
  ll n;cin>>n;
  ll arr[n+1]={0};
  bool YN = 1;
  for(int i=1;i<=n;i++){
  	cin>>arr[i];
  }
  debug(n);
  for(int i=n;i>0;i--){
        // debug(arr[n]<arr[n-1]);
  	if(arr[i]<arr[i-1]){
        if(((i-1)!=1) &&((i-1)!=2) && ((i-1)!=4) && ((i-1)!=8) && ((i-1)!=16) ){
            YN = 0;
            break;
        }
    }
  }
  if(YN){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
  }
    return 0;
}