/*Codeforces Round 295 (Div. 2)-->  " /problem/520/A " By NishkarsH*/
#include<bits/stdc++.h>
using namespace std;
bool CheckPangram(string str){
    set<char> s;
for (auto ch : str) {
        if (ch >= 'a' and ch <= 'z')
            s.insert(ch);
        if (ch >= 'A' and ch <= 'Z') {
            ch = tolower(ch);
            s.insert(ch);
        }
    }
    return s.size() == 26;
}
int main()
{
    int a; cin>>a;
    string c; cin>>c;
    if (CheckPangram(c)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;

}