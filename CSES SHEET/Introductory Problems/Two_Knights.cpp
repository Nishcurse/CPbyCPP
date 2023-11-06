/*CSES SHEET INTRODUCTORY PROBLEM_TWO KNIGHTS*/
// total posii - posiible way of knights forming an 2x3 rectangle // 
#include <bits/stdc++.h>
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TC cin>>t;
#define TCDebug cin>>t;for(int i=1;i<=t;i++)
typedef long long int ll ;
ll t=1;
using namespace std;
void wronginput(int testcase){
    if(t==testcase){
    cout<<"whatever input you were taking"<<" ";
    }
}
int main() {
  NishuisYours
  #ifndef ONLINE_JUDGE
  freopen("andar.txt","r",stdin);
  freopen("bahar.txt","w",stdout);
  #endif
 while(t--){
    ll z,p;cin>>z;
    for(int i=1;i<=z;i++){
        if(i==1){
            cout<<0<<"\n";
        }else if(i==2){
            cout<<6<<"\n";
        }else{
    p = i*i;
    ll totposii = (p*(p-1))/2;
    ll posiiremove = (4 * (i-2) * (i-1));
    cout<<totposii-posiiremove<<"\n";   
}
}
  }
  return 0;
}