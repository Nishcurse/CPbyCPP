// nishcurse Yahan Double Wahan double 
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int ll ;
using namespace std;
int main() {
  HelloNishu
  Testcases{
    ll px,py,ax,ay,bx,by;
    double ans;
    cin>>px>>py>>ax>>ay>>bx>>by;
    double ao = sqrt((ax*ax) + (ay*ay)) ;
    double bo = sqrt((bx*bx) + (by*by)) ;
    double ap =sqrt( (px-ax)*(px-ax) +  (py-ay)*(py-ay)) ;
    double bp = sqrt((px-bx)*(px-bx) +  (py-by)*(py-by) );
    double aonly = max((ao),(ap));
    double bonly = max((bo),(bp));
    double case1 = (min(aonly ,bonly));
    double ab = sqrt(((bx-ax)*(bx-ax) + (by-ay)*(by-ay)))/2.0;
    double aobp = (max({ao,ab,bp}));
    double apbo = (max({ap,ab,bo}));
    ans = min ({case1,aobp,apbo});
    cout<<setprecision(11)<<ans<<"\n";
  }
  return 0;
}