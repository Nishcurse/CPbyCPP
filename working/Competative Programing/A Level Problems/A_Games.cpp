/*link -->"https://codeforces.com/problemset/problem/268/A" By NIshuuu */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int teamcount,output,c;
    output = 0 ;
    cin>>teamcount;
    int arr[teamcount][2];
    for(int i=0;i<teamcount;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for  (int i=0;i<teamcount-1;i++){
        for(int j=0;j<2;j++){
            c = i;
            int k=0;
            // cout<<arr[i][j]<<endl;
            while(c<teamcount-1){
            if(arr[i][j]==arr[i+1+k][1] && j == 0){
                output = output + 1;
            }else if(arr[i][j]==arr[i+1+k][0] && j==1){
                output = output + 1;
            }
            k++;
            c++;
            }
            // cout<<"Output->"<<output<<endl;
        }
    }
    cout<<output<<endl;
}