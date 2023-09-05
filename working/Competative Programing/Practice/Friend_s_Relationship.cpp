#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int lines;
		cin>>lines;
        for(int i=1;i<lines+1;i++){
            for (int j=0;j<i;j++){
                cout<<"*";
            }
            for (int k=0;k< 2*(lines-i) ; k++){
                cout<<"#";
            }
            for (int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<"\n";
        }cout<<endl;
		
	}
}