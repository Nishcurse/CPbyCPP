 #include <iostream>
using namespace std;
int main() {
    long long number;
    cin >>number;
    cout<<(number&1?-1:1)*(number+1)/2;
    return 0;
}