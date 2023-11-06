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
Testcases{
    ll n,q,p;cin>>n>>q;
    vector<ll> v;
    vector<ll> queries;
    vector<ll> qcnt(31,0);
    vector<ll> oper;
    for(ll i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }
    for(ll i=0;i<q;i++){
        cin>>p;
        qcnt[p]++;
        queries.push_back(p);
    }
    for(ll i=0;i<q;i++){
        if(qcnt[queries[i]]>0){
            oper.push_back((1<<queries[i]));
            fill(qcnt.begin() + queries[i],qcnt.end(), 0);
        }
    }
    for(ll i=0;i<n;i++){
        for(int j:oper){
            if(v[i]%j==0){
                v[i]+=(j/2);
            }
        }
    }
    for(ll i:v) 
    { 
        cout << i<< " ";
    } cout<<"\n";
}
    return 0;
}