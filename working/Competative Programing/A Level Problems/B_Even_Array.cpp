/* 	"1367B - Even Array" By Utkarsh-->(Nishu)*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int c,mc1=0,mc2=0;cin>>c; //mc=main character
        int aru[c];
        for(int i=0;i<c;i++){
            cin>>aru[i];
            if((i&1)==0 && (aru[i]&1)!=0){
                mc1++;
            }else if((i&1)!=0 && (aru[i]&1)==0){
                mc2++;
            }
        // printf("checking i %d mc is %d \n",i,mc);
        }
        if(mc1!=mc2){
            cout<<-1<<"\n";
        }else{
            cout<<mc1<<"\n";
        }
    }
    return 0;
}