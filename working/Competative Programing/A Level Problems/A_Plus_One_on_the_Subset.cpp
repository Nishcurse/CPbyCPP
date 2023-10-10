/* 1624A - Plus One on the Subset By Utkarsh(nishuu_._)*/
#include <bits/stdc++.h>
#define Nishu ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long int lli;
using namespace std;
int main (){
    Nishu
    int t ;cin>>t;
    while(t--){
        lli c,max=0,min=1000000000;cin>>c;
        lli ar[c];
        for(int i=0;i<c;i++){
            cin>>ar[i];
            if(ar[i]>max){
                max=ar[i];
            }
            if(ar[i]<min){
                min=ar[i];
            }
        }
        cout<<max-min<<"\n";
    }
    return 0;
}