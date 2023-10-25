#include <bits/stdc++.h>
#define JaiBajrangBali ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TestCases int t;cin>>t;while(t--)
typedef long long int lli;
using namespace std;
int main() {
    JaiBajrangBali
    TestCases{
        vector<int>  v(27,0);
        int n,k,oc=0,ec=0,fn=0;cin>>n>>k;
        fn = n - k ;
        string s;cin>>s;
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }
         for(int i=0;i<27;i++){
            if(v[i]%2!=0){
                oc++;
            }
        }
        ec=n-oc;
        if(k>oc){
            oc = abs(k-oc)%2;
        }else{
            oc = abs(k-oc);
        }
        if(fn%2==0){
            if(oc==0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            if(oc==1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }

    }
    return 0;
}