/*"747A - A keyboard" By Utkarsh(NishKarsH)*/ 
 #include <bits/stdc++.h> 
 using namespace std;
 int arr[128]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,28,29,0,0,0,0,0,0,0,0,0,0,0,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,24,22,12,2,13,14,15,7,16,17,18,26,25,8,9,0,3,11,4,6,23,1,21,5,20,0,0,0,0,0};
const char ItoA[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
 int main() 
 { 
    int indi=0;
     char b;cin>>b;
     string khel;cin>>khel;
     if(b=='L'){
         indi=1;
     }else{
         indi=-1;
     }
     string utar= "";
     for(int i=0;i<khel.length();i++){
         int b;
         b=arr[(int)khel[i]]+indi;
         utar.push_back(ItoA[b]);
     }
     cout<<utar;
     return 0; 
 }