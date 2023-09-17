#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,helbMe;
    cin>>a>>b;
    if(a==1 && b==1){
        helbMe = 1;
    }
    else if(a>=b){
        helbMe = 6-a;
    }
    else{
        helbMe = 6-b;
    }
    cout<<"1/"<<helbMe<<endl;
    return 0;
}