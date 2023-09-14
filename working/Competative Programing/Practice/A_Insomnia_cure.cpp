/*Problem--> "problem/148/A" NishKarsH*/
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int  k,l,m,n,d,out;
    cin>>k>>l>>m>>n>>d;
    out = 0;
    for(int i =1;i<=d;i++){
        if(i%k != 0 && i%l != 0 && i%m != 0 && i%n != 0){
            out = out + 1;
        }
    }    
    cout<<d-out<<endl;
    return 0;
}