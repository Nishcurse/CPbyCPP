#include <bits/stdc++.h>
using namespace std;
void ToUpper(string &str) {
    for (auto beg = str.begin(); beg != str.end(); ++beg) {
        *beg = toupper(*beg);
    }
}                   
int main()
{
    string name;
    // cout << "Insert a name: ";          
    cin >> name;
    ToUpper(name);
    cout << name << endl;
}
