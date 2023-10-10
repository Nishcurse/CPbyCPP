/*Problem-->"/problem/1154/A" by NishuuU */
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main () {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll sum = max(max(a,b),max(c,d));
    if (sum-d!=0 ){
        cout<<sum-d<<" ";
    }
    if (sum-c!=0 ){
        cout<<sum-c<<" ";
    }
    if (sum-a!=0 ){
        cout<<sum-a<<" ";
    }
    if (sum-b!=0 ){
        cout<<sum-b<<" ";
    }

}