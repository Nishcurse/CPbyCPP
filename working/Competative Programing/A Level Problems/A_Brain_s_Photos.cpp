/*"	707A - Brain's Photos " By Nishu  */
#include <bits/stdc++.h>
#define JaiShreeRam ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    JaiShreeRam
	int m,n;cin>>m>>n; 
	char arr[m][n];
    bool isColour = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
			if(arr[i][j]=='C'||arr[i][j]=='M'||arr[i][j]=='Y'){
                isColour = 1;
                goto end;
            }
		}
	}
    end:
    if(isColour){
        cout<<"#Color\n";
    }else{
        cout<<"#Black&White\n";
    }
}
