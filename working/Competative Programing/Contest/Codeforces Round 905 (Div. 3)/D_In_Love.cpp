// Nishcurse Opieeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin >> t;while (t--)
// DEBUG PART___________________________________________________________________________________________________
void _print(int a) {cerr << a << " ";}
void _print(ll a) { cerr << a; }
void _print(bool a) {cerr << a;}
void _print(float a) {cerr << a;}
void _print(string a) {cerr << a;}
void _print(double a) {cerr << a;}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void solve1(){
    // Time Limit Exceeded over This Bruteforce Approach
    int q; cin >> q;
    multiset<pair<ll, ll>> ms;

    for (int i = 0; i < q; i++) {
        bool is = 0;
        char oper; cin >> oper;
        ll l, r; cin >> l >> r;

        if (oper == '+') {
            ms.insert(make_pair(l, r));
        } else if (oper == '-') {
            pair<ll, ll> pair_to_remove = make_pair(l, r);
            auto it = ms.find(pair_to_remove);
            if (it != ms.end()) {
                ms.erase(it);
            }
        }
        for (auto it1 = ms.begin(); it1 != ms.end(); ++it1) {
            for (auto it2 = std::next(it1); it2 != ms.end(); ++it2) {
                if (it1->second < it2->first) {
                    is = 1;
                    break;
                }
            }
        }
        if(is){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
//DEBUG PART_____________________________________________________________________________________________________
int main() {
    // Config CODE___________________________________________________________________________________________________
    NishuisYours
    // #ifndef ONLINE_JUDGE 
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    // freopen("error.txt", "w", stderr); 
    // #endif
    //CONFIG PART END_________________________________________________________________________________________________
    ll q;cin>>q;
    multiset<ll> left,right;
    while(q--){
        char oper;
        cin>>oper;
        ll a,b;cin>>a>>b;
        if(oper=='+'){
            left.insert(a);
            right.insert(b);
        }else{
            left.erase(left.lower_bound(a));
            right.erase(right.lower_bound(b));
        }
        
        if(left.empty()){
            cout<<"NO\n";
        }else{ 
        auto it =left.end();
        debug(*it);
        it--;
        if((*it)>(*right.begin())){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    }



    return 0;
}
