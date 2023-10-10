/* IOI watch party - day 2 (maybe with some guests?) By Nishuuu*/
#include <bits/stdc++.h>
using namespace std;
int main (){
    int c,denaHai;
    denaHai=0;
    cin>>c;
    int arr[c];
    for (int i=0;i<c;i++){
        cin>>arr[i];
    }
    for (int i=0;i<c;i++){
        if(arr[i]!=arr[i+1]){
            denaHai += 1;
        }
    }
    cout<<denaHai<<endl;
    return 0;
}