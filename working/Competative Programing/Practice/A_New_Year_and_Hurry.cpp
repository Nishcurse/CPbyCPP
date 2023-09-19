/*Problem-->" problem/750/A" By NIshuuuu 17/09 */
#include <bits/stdc++.h>
using namespace std;
int main (){
    int pehla,dosra,bachahuatime,kaamka,karliya;
    cin>>pehla>>dosra;
    karliya =0;
    bachahuatime = 240 - dosra ;
    for(int i=pehla;i>=0;i--){
    kaamka = 0;
    kaamka = 5 *(i*(i+1)/2);
    if (kaamka<=bachahuatime){
        karliya=i;
        break;
    }   
    }
    cout<<karliya;
    return 0;
}