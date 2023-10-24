/* "  "  By Nishu*/
#include <bits/stdc++.h>
#define HweyNishuu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main () {
    int n,a,angle=0;cin>>n>>a;
    angle = ((n-2)*180)/ n ;
    int  arr[n-2];
    arr[0] = angle;
    for(int i=1;i<n-2;i++){
        arr[i] = angle/(2*i);
    }
    for(int i=0;i<n-2;i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}


