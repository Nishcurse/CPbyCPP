/*problem--> " problem/732/A" By Nishuuu */
#include<bits/stdc++.h>
using namespace std;
int main () 
{
    long long b,c,t,i;
    i=1;
    cin>>b>>c;
    for(;true;){
        if((b*i-c)%10==0 || (b*i)%10==0 ){
            break;
        }else{
            i++;
        }
    }
    cout<<i<<endl;
}
// After Changing int to long long it was def 2X faster than iny one