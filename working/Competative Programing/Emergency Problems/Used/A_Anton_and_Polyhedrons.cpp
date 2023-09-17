/*(Codeforces Round 404 (Div. 2)  By Nishu)-->785/A  */
#include <bits/stdc++.h>
using namespace std;
int main(){
    // Code First try
    /*
    int inputs,noOfSides;
    noOfSides = 0;
    cin>>inputs;
    for(int i=0;i<inputs;i++)
{
    string s ;
    cin>>s;
    if(s=="Cube"){
        noOfSides += 6 ;  
    }
    if(s=="Octahedron"){
        noOfSides += 8 ;  
    }
    if(s=="Dodecahedron"){
        noOfSides += 12 ;  
    }
    if(s=="Icosahedron"){
        noOfSides += 20;  
    }
    if(s=="Tetrahedron"){
        noOfSides += 4;  
    }
    // cout<<"sides"<<noOfSides<<endl;
}
cout<<noOfSides<<endl;
    */
   // POWERING UP THIS CODE 
   // Tried if else 238 checked switch case 280 now tring switch case ()
   ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
   int c,sum;cin>>c;
   sum=0;
   while (c--){
    string a;cin>>a;
    if(a[0]=='T'){
        sum += 4;
    }
    else if(a[0]=='C'){
        sum += 6;
    }
    else if(a[0]=='O'){
        sum += 8;
    }
    else if(a[0]=='D'){
        sum += 12;
    }
    else if(a[0]=='I'){
        sum += 20;
    }
   }
   cout<<sum<<endl;
    return 0;
}