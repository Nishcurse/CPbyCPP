#include<bits/stdc++.h>
using namespace std ;
int fun(int a){
    int c;
    for (int i = 0; i < a; i++)
    {
        if(a%2==0){
            c = c + a;
        }else{
            c = c - a;
        }
        --a;
    }
    return c+1;
    
}
int main(){
    int c;
    cin>>c;
    int main = fun(c);
    cout<<main<<endl;
    return 0;
}