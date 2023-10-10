#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            cout<<"Yes"<<endl;
        
        }else if (a==b&&b==c){
            cout<<"Yes"<<endl;
        }else{
            if(a-2>=b+c){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}