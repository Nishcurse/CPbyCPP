/* problem-->"https://codeforces.com/problemset/problem/469/A" */
#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>>a;
    cin>>b;
    int arr[2*b];
    for (int i =0;i<2*b;i++){
        cin>>arr[i];
    }
    set <int> BagheBillo;
    for (int i =0;i<2*b;i++){
        BagheBillo.insert(arr[i]);
    }
    int billo = BagheBillo.size();
    if(billo==a){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}