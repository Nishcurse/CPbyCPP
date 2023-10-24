
#include <bits/stdc++.h>
using namespace std;
int main () {
    string s1;
    while(getline(cin,s1,' ')){
         transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        cout<<s1<<"\n";
    }
    return 0;
}
