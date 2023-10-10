/*problem-->"1409/A" By nishu for you ❤️ */
// tried by actual solving actual and add++output every time but as stupid 
// Created Section of diff between bopth inputs for 10 to be added +1(is not factor of 10 as one additional step will be required to make a=b)
// optimisation of code by avoiding loops as its not needed 
// optimised with untieing cin
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n,diff;
        cin >> a >> b;
        diff= a-b;
        if (diff<0){
            diff = -diff;
        }
        n = diff/10;
        if(diff%10!=0){n++;}
        cout<<n<<endl;
    }
    return 0;
}