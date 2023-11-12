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
  int n;cin>>n;
  ll arr[n][n];
  if(n%2!=0){
  ll number = 1;
  ll even = 2;
  ll l = 1; 
for(int j=0;j<n;j++){
  arr[0][j]=number;
  number+=2;
}
for(int i=0;i<(n-1)/2;i++){
  for(int k=0;k<2;k++){
    int doit = (l+1) / 2 ;
  for(int j=0;j<n-(2*doit);j++){
    arr[l][j]=number;
    number+=2;
  }
  for(int j=0;j<2*doit;j++){
    arr[l][n-j-1]=even;
    even+=2;
  }
  l++;
}
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cout<<arr[i][j]<<" ";
  }cout<<"\n";
}
 }else{
    if(n%4!=0){
        ll even = 2;
    }
 }
  
}
return 0;
}

