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
    ll n,pos=9,no=9;cin>>n;
    vector<int> v;
    if(n>45){
        cout<<-1<<"\n";
    }else{
        for(int j=9;j>0;j--){
                if(n<=0){
                    break;
                }else{
                    if(n>j){
                        n-=j;
                        v.push_back(j);
                    }else{
                        v.push_back(n);
                        n==0;
                        break;
                    }
                }
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[v.size()-i-1];
        }cout<<"\n";
    }
        
return 0;
}

