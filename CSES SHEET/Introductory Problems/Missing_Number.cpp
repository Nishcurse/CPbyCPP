// nishcurse - @date
#include <bits/stdc++.h>
#define HelloNishu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
  HelloNishu
  long long int n,sum=0,alo=0,hue;
  cin>>n;
  alo=(n*(n+1))/2;
  n--;
  while (n--)
  {
    cin>>hue;
    sum+=hue;
  }
  cout<<(alo-sum);
  return 0;
}