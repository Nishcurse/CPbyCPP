// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int main() {
  HelloNishu
  Testcases{
    lli time = 4,cp=1,rp=0; 
    string s;cin>>s;
    for(int i=0;i<4;i++){
        if(s[i]=='0'){
            rp=10;
        }else{
            rp = s[i] - '0'; 
        }
        time+=abs(cp-rp);
        cp=rp;
    }
    cout<<time<<"\n";    
 }

  return 0;
}