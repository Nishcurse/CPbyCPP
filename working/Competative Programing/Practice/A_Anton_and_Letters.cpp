/*Problem -->"problem/443/A" Baby Come on ! */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int ar[27]={0};
    int Alagalag = 0;
    string s;
    getline(cin,s);
    for(int i=1;i<s.length()-1;i++){
        if(s[i]>='a' && s[i]<='z'){
            ar[s[i]-'a'] += 1;
        }
    }
    for(int i=0;i<27;i++){
        if(ar[i]!=0){
            Alagalag += 1;
        }
    }
    cout<<Alagalag<<endl;
}