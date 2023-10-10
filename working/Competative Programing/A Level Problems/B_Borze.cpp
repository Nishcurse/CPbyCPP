/* "32B - Borze" By Nishu ❤️*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    string s; cin>>s;
    string code;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.' && i==s.length()-1){
            code.push_back('0');
        }
        else if ((s[i-1]!='-'&& s[i]=='.'&&s[i+1]=='.') ||(s[i-2]=='-' && s[i-1]=='-'&& s[i]=='.'&&s[i+1]=='.')){
            code.push_back('0');
            code.push_back('0');
            i++;
        }
        else if((s[i]=='.' && s[i+1]=='-') ){
            code.push_back('0');
        }else if(s[i]=='-'&&s[i+1]=='.'){
            code.push_back('1');
            i++;
        }else {
            code.push_back('2');
            i++;
        }
    }
        cout<<code;
    return 0;
}