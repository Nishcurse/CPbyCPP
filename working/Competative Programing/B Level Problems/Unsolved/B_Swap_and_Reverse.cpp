#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int main() {
  HelloNishu
  Testcases{
    lli n,k;cin>>n>>k;
    string s;cin>>s;
    if((k&1)==0){
        sort(s.begin(),s.end());
        cout<<s<<"\n";
        continue;
    }else {
      string s1,s0;
      for(int i=0;i<n;i++){
        if(i%2==0){
          s0+=s[i];
        }else{
          s1+=s[i];
        }
      }
        sort(s1.begin(),s1.end());
        sort(s0.begin(),s0.end());
        int e=0,o=0;
        for(int i=0;i<n;i++){
          if(i%2==0){
            cout<<s0[e];
            e++;
          }else{
            cout<<s1[o];
            o++;
          }
        }
        cout<<"\n";
    }
  }
  return 0;
}