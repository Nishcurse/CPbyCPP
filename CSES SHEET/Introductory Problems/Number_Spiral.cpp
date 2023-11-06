#include <bits/stdc++.h>
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int ll ;
using namespace std;
int main() {
  NishuisYours
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  Testcases{
    ll h,v,hi,vi;cin>>h>>v;
    if(h>=v){
        v--;
        if(h%2==0){
         hi = h*h;
        //  cout<<hi<<"\n";
        cout<<hi-v<<"\n";
        // cout<<"mein chal rha hun";
        }else{
            h--;
            hi = h*h +1;
        cout<<hi+v<<"\n";
        }
    }else{
        h--;
        if(v%2!=0){
        vi = v*v;
        cout<<vi-h<<"\n";
        }else{
            v--;
        vi = v*v +1;
        cout<<vi+h<<"\n";
        }
    }
  }
  return 0;
}