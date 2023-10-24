// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int main() {
  HelloNishu
  Testcases{
   lli n;cin>>n;
   if(n==1){
    cout<<0<<"\n";
   }else{

   set<lli> s;
   while(n--){
    lli a,z;cin>>a;
    for(int i=0;i<a;i++){
        cin>>z;
        s.insert(z);
    }
   }
   cout<<s.size()-1<<"\n"; 
   }
  }
  return 0;
}