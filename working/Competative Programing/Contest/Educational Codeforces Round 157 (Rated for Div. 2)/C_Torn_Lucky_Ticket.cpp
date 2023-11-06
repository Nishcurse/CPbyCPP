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
int main() {
// Config CODE___________________________________________________________________________________________________
NishuisYours
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout); 
freopen("error.txt", "w", stderr); 
#endif
//CONFIG PART END_________________________________________________________________________________________________
ll t,p=0;cin>>t;
 string arr[t];
for(int i=0;i<t;i++){
    cin>>arr[i];
}
vector<vector<int>> v;
for(int i=0;i<t;i++){
    string a = arr[i];int sum=0;
    for(int i=0;i<a.length();i++){
        sum+= (a[i]-'0');
    }
    v[a.length()][sum]++;
}
for(int i=0;i<t;i++){
    if(arr[i].length()%2==0){
        if(arr[i].length()%2==2){
            p += v[2][sumtindesx(arr[i],2)]
        }else{
            p+= v[4][]
        }

    }
}


    return 0;
}