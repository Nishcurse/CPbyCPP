// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int lli ;
using namespace std;
int main() {
  HelloNishu
  Testcases{
    lli n,k;cin>>n>>k;
    lli nu,min=4,steps=0,ec=0,oc=0;
    if(k==4){
        for(int i=0;i<n;i++){
            cin>>nu;
            if(nu%2==0){
                ec++;
            }
            steps = k - (nu%k);
            if(nu%k==0){
                min=0;
            }else{
                if(steps<min){
                    min=steps;
                }
            }
        }
        if(ec>=2){
            min=0;
        }else if(ec==1 && n-ec>0 && min>1){
            min=1;
        }else if(ec==0 &&  n-ec>=2 && min>2){
            min=2;
        }
    }else{
        for(int i=0;i<n;i++){
            cin>>nu;
            steps = k - (nu%k);
            if(nu%k==0){
                min=0;
            }else{
                if(steps<min){
                    min=steps;
                }
            }
        }
    }
    cout<<min<<"\n";
  }
  return 0;
}