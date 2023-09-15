/*problem -->"Codeforces Round 404 (Div. 2)" By Nishu*/
#include <bits/stdc++.h>
using namespace std;
int main(){
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
/*
"Tetrahedron" --->4.
Cube---->6 square faces
Octahedron----> 8 triangular faces.
Dodecahedron ---->12 pentagonal faces.
Icosahedron-----> 20 triangular faces.
*/    
    return 0;
}