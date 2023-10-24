

// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int in ;
using namespace std;

int main() {
  HelloNishu
  Testcases{
    in n,p,sum=0,vi=0;cin>>n;
    p=n;
    string s;cin>>s;
    vector<in> v(n,-1);
    for(int i=n;i>=0;i--){
        if(s[i-1]=='0'){
            sum+=p-i;
            v[vi]=sum;
            vi++;
            p--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
  }

  return 0;
}