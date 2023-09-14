#include <iostream>
using namespace std;
// CPP Reference 
void incremeant(int &a){//After & now it passes the reference of the a so the actual value gets affected
    a++;
}
int main()
{
    // int a = 32; // Global variable
    /* OVERFLOW */
    // Ranges of Data Types
    /* -10^9 < int < 10^9 */
    /* -10^12 < long int < 10^12 */
    /* -10^18 < long long int < 10^18 */
    // Loops in CPP 
    // for (int i = 0; i < a; i++ /* as long as its true*/)
    // {
    //     int c = 3; // Local Variable only accessible within the scoop
    //     if(i==3){
    //     break; // exit to the last for loop Always no matter how many if loops you have used
    //     }
    // } 
    // while (a > 33 /* untill its true*/)
    // {
    //     cout << "this code will work" << endl;
    //     a++;
    // }
    // do
    // {
    //     /* code */
    // } while (/* condition */); // will run atleast once then untill cond is true

    
    // Strings(string) in cpp
    /*
    string a,b; // Collection of the characters
    cin>>a>>b; // stdIN for a String Breaks After " " or "\n"--> new line 
    cout<<a<<endl;
    */
   // String Methods
    string x= "Utkarsh ";
    string y = "Mudgal" ;
    string result = x + y; 
    // on cout will give "Utkarsh MUdgal" 
    cout<<result<<endl;
    cout<<(x==y)<<endl; //can compare two string isEqual or notEqual-->caseSensitive
    // x[index] will return the char at that index new char can also be assigned 
    cout<<sizeof(x)<<endl;//can return the size of string
    cout<<x.length()<<endl;//can return the length of string
    /*getline(); --> Important stuff*/
    getline(cin, y); //stdIn as Whole Line
    cin.ignore(); //reset cursor to the starting of the next line 
    /*CPP References */
    int a =12;
    incremeant(a);
    cout<<a<<endl;
    /*Some Cpp Functions --> Swap(a,b); or max(a,b);   */
    return 0;
}