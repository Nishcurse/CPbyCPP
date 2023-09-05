/*Problem-->" https://codeforces.com/problemset/problem/228/A" */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    set <int> Yo;
    Yo.insert(a1);
    Yo.insert(a2);
    Yo.insert(a3);
    Yo.insert(a4);
    int alagAlag =Yo.size();
    cout<<(4-alagAlag)<<endl;
}