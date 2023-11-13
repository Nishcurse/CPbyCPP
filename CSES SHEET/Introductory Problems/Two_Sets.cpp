/* NishuisYours But you doesn't exist */
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
 ll n,l=0,r=0;cin>>n;
 vector<ll> no1;
 vector<ll> no2;
 if(n%4!=0 && n%4!=3){
 	cout<<"NO\n";
 }else{
	cout<<"YES\n";
 	if(n%4==0){
 		ll loop = n/4;
 		l=1,r=n;
 		for(int i=0;i<loop;i++){
 		no1.push_back(l);
 		no1.push_back(r);
 		l++;r--;	
 		no2.push_back(l);
 		no2.push_back(r);
 		l++;r--;
 	}			
 	}else{
 		ll loop = (n-3) / 2;
 		l=4;r=n;
 		no1.push_back(1);
 		no1.push_back(2);
 		no2.push_back(3);
 		for(int i=0;i<loop;i++){
 			debug("EK Baar To chal");
 		if(i%2==0) {
 		no1.push_back(l);
 		no1.push_back(r);
 		l++;r--;	
 	}else{
 		no2.push_back(l);
 		no2.push_back(r);
 		l++;r--;
 	}		
 		}
 	}
 	cout<<no1.size()<<"\n";
 	for(int i:no1){
 		cout<<i<<" ";
 	}cout<<"\n";
 	cout<<no2.size()<<"\n";
 	for(int i:no2){
 		cout<<i<<" ";
 	}cout<<"\n";
 }
    return 0;
 }
