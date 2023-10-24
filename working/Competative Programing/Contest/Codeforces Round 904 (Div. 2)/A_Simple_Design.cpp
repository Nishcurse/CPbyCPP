

// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
bool check(int a,int k){
    lli sum =0 ;
    while(a>0){
        sum += a%10;
        a=a/10;
    }
    if(sum%k==0){
        return 1;
    }else{
        return 0;
    }
}
int main() {
  HelloNishu
  Testcases{
    lli a,b;cin>>a>>b;
    while(check(a,b)==0){
        a++;
    }
    cout<<a<<"\n";
  }
  return 0;
}