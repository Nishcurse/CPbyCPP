#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a,b,c;
    cin>>a>>b;
    int arr[a];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int i=0;i<a;i++){
        if (arr[i]>b){
            c = c+2;
        }else{
            c=c+1;
        }
    }
    cout<<c<<endl;
    return 0;
}
