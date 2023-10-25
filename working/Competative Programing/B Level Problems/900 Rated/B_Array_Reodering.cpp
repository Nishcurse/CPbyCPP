// ___Chiklu___
#include <bits/stdc++.h>
#define OyeJaldiKar ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TestCases int t;cin>>t;while(t--)
typedef long long int lli;
using namespace std;
int gcd(int a, int b) 
{ 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
    return result; 
} 
int main() {
    OyeJaldiKar
    TestCases{
        lli c,ec=0,p;cin>>c;
        vector<lli> oddhun;
        for(int i=0;i<c;i++){
            cin>>p;
            if((p&1)==0){
                ec++;
            }else{
                oddhun.push_back(p);
            }
        }
        p=0;
        p += ((ec)*(2*(c-1)-ec+1))/2;
        for(int i=0;i<oddhun.size();i++){
            for(int j=i+1;j<oddhun.size();j++){
                if(gcd(oddhun[i],oddhun[j])>1){
                    p++;
                }
            }
        }
        cout<<p<<"\n";
    }
    return 0;
}