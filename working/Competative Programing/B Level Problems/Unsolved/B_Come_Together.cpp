/*1845B -  By UtkarsH(Nishu) */
#include <bits/stdc++.h>
#define HeyNishuu                   \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);
#define TestCase \
  int t;         \
  cin >> t;      \
  while (t--)
typedef long long int ll;
using namespace std;
int main()
{
  HeyNishuu
      TestCase
  {
    int x,y,x1,y1,x2,y2,ans=0;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    if((x1>=x && x2<=x) || (x1<=x && x2>=x)){
      ans += 1;
    }else{
      if(abs(x1-x)>abs(x2-x)){
        ans += abs(x2-x) + 1;
      }else{
        ans += abs(x1-x) + 1;
      }
    }
    if((y1>=y && y2<=y) || (y1<=y && y2>=y)){
      ans +=0;
    }else{
      if(abs(y1-y)>abs(y2-y)){
        ans += abs(y2-y);
      }else{
        ans += abs(y1-y);
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}