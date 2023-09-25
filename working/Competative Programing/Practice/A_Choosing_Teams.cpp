/*"problem/432/A" By Nishu ❤️ */
// OPtimizingggggggggggggggggg
#include <iostream>
using namespace std;
int main (){
    int c,d,e,f=0;
    cin >>c>>d ;
    for (int i=0;i<c;i++){
        cin>>e;
        if(5-d>=e){
            f++;
        }
    }
    cout<<f/3;
}