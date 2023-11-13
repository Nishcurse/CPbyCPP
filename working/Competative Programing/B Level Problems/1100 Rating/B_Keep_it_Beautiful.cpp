/* NishuisYours But you don't exist */
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
	vector<int> v;
	ll q,bp=0;cin>>q; // bp hai apna breakpoint 
	string s="";
	int p;cin>>p;
	v.push_back(p);
	s.push_back('1');
	q--;
	// ek  query karli pehle hi
	while(q--){
		debug(s);debug(v);debug(bp);debug(p);
		cin>>p;
		if(bp!=0){
			debug("BP IS NOT ZERO!");
			if(p<=v[0] && p>=v[v.size()-1]){
				debug("appending");
				s.push_back('1');
				v.push_back(p);
			}else{
				debug("excluding");
				s.push_back('0');
			}
		}else{
			debug("BP IS ZERO!");
		if(p<v[v.size()-1]){
			if(bp==0 && p<=v[0]){
				v.push_back(p);
				bp++;
				s.push_back('1');
			}else{
				s.push_back('0');
			}
		}else{
				v.push_back(p);
				s.push_back('1');
			}
		}
		
		}cout<<s<<"\n";	
	}
	return 0;
}