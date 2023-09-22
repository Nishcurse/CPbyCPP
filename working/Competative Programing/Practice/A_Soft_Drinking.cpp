/* "/problem/151/A" By Nishu ❤️ */
#include <bits/stdc++.h>
using namespace std;
int  main(){
    int arr[8];
    int a , b , c;
    for (int i=0;i<8;i++){
        cin>>arr[i];
    }
    a = (arr[1]*arr[2])/(arr[0]*arr[6]); //Daaru
    b = arr[5]/(arr[0]*arr[7]); //namak
    c =  (arr[3]*arr[4])/arr[0]; // Nimbu 
    cout<<min({a,b,c})<<endl; // Can't Use () while using min max for values more than two 
}