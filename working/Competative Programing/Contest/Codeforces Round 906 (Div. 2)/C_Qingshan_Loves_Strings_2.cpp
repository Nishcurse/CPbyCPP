/* if you are reading this go get a life man */
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
    ll n,ocnt=0,zcnt=0,stepcnt=0,l=0,r=0 ;cin>>n;
    string a,b="01";cin>>a;
    if(n%2!=0){
        cout<<-1<<"\n";
    }else{
    vector<ll> vec; 
    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            zcnt++;
        }else{
            ocnt++;
        }
    }
    if(ocnt!=zcnt){
        cout<<-1<<"\n";
    }else{
        for (int i = 0; i < a.length() / 2; i++) {
            debug(i);
    debug((int)a.length());
    debug(a);
    if (a[i] == a[a.length() - i - 1]) {
        debug("i am running");
        stepcnt++;
        if (a[i] == '0') {
            debug("Equal Zero");
            vec.push_back((a.length() - i - 1) + 1);
            a.insert(a.length() - i , b);
            debug(a);
            debug((int)a.length());
        } else {
            debug("Equal One");
            vec.push_back(i);
            a.insert(i, b);
            debug(a);
            debug((int)a.length());
        }
    }
}
cout<<stepcnt<<"\n";
    for(int i:vec){
        cout<<i<<" ";
    }cout<<"\n";
    }
    
}
}
}


