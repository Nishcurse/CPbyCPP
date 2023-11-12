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
    ll n,ocnt=0,zcnt=0,stepcnt=0 ;cin>>n;
    string a;cin>>a;
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
        // for(int i=0;i<n/2;i++){
        //     if(a[i]==a[a.length()-i-1]){
        //         a = a.substr(i+1,a.length()-1);
        //         debug(a);
        //     }else{
        //         a = a.substr(i+1,a.length()-1);
        //         debug(a);
        //     }
        }
       a = a.substr(0,a.length()-1);
       cout<<a<<"\n";
       debug(a);
    }

return 0;
}

