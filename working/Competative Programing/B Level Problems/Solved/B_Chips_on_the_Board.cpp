/*	1879B - Chips on the Board By NIshu */
#include <iostream>
#include <vector>
#include <limits>
#define ll long long int
using namespace std;
#define HeyNishu ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    HeyNishu
    ll t;
    cin >> t;
    while (t--)
    {
       ll c,m1=10000000000,m2=10000000000,s1=0,s2=0;cin>>c;
       vector<int> aru(2*c);
       for(int i=0;i<2*c;i++){
        cin>>aru[i];
       }
       for(int i=0;i<c;i++){
        s1 += aru[i];
        if(aru[i]<m1){
            m1=aru[i];
        }
       }
       for(int i=c;i<2*c;i++){
        s2 += aru[i];
        if(aru[i]<m2){
            m2=aru[i];
        }
       }
       s1 += c*m2;
       s2 += c*m1;
       cout<< min(s1,s2)<<"\n"; 
}
    return 0;
    }
