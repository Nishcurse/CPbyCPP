#include <iostream>
using namespace std;
int main()
{
    int number,kitnibaar;
    cin>>number>>kitnibaar;
    for (size_t i = 0; i < kitnibaar; i++)
    {
        if (number%10!=0)
        {
            number = number -1 ;
        }else{
            number = number/10;
        }
        
    }
    cout<<number<<endl;
    return 0;
}