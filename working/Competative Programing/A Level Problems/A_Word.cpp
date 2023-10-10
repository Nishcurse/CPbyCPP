#include<bits/stdc++.h>
#define JaldiWahanseHAtoo ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    JaldiWahanseHAtoo
    int u=0,l=0;
   string s;cin>>s;
   for(int i =0;i<s.length();i++){
    if(isupper(s[i]))
    u++;
    else if(islower(s[i]))
    l++;
   }
//    printf("upper is %d and lower %d",u,l); 
   if (u>l){
    transform(s.begin(),s.end(),s.begin(),::toupper);
   }else{
    transform(s.begin(),s.end(),s.begin(),::tolower);
   }
   cout<<s<<"\n";
return 0;
}