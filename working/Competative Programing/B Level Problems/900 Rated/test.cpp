
// Nishcurse -- 28-10-2023 bhai ke midsem aa rhe hai padhai nhi ho rhi
#include <bits/stdc++.h>
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
bool luckynumber(int i){
    bool a = 1;
	while(i>0){
		if(i%10==4 || i%10==7){
            i=i/10;
		}else{
            a=0;
            break;
        }
	}
	return a;
}
void factorniikaldunga(vector<int> &fact,int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            fact.push_back(i);
        }
    }
}
int main() {
  NishuisYours
  #ifndef ONLINE_JUDGE
  freopen("andar.txt","r",stdin);
  freopen("bahar.txt","w",stdout);
  #endif
	int n;cin>>n;
    if(luckynumber(n)){
        cout<<"YES\n";
    }else{
        bool meinbatunga = 0;
        vector<int> fact;
        factorniikaldunga(fact,n);
        for(const int i:fact){
            if(luckynumber(i)){
                meinbatunga = 1;
                break;
            }
        }
        if(meinbatunga){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
  return 0;
}
