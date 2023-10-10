/* "1879A - Rigged!"  By Utkarsh (Nishuu)  */
#define io ios_base::sync_with_stdio(false);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main() {
    io
    int t;cin>>t;
    while(t--){
        int c;cin>>c;
        bool isPossi = false;
        int arr[c][2];
        for(int i=0;i<c;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
                }
            }
        for(int i=1;i<c;i++){
                if(arr[i][0]>=arr[0][0] && arr[i][1]>=arr[0][1]){
                    isPossi = true;
                    break;
                }
                }
        if(isPossi){
            cout<<-1<<"\n";
        }else{
            cout<<arr[0][0]<<"\n";
        }
        }
    return 0;
    }