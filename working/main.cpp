#include <iostream>
#include <string> //In order to use String Methods n all
using namespace std;
// ReturnType FuncName;--> Function can be Initialised like this
/*
int add(int a,int b){
    int c = a + b;
    return c;
}
*/
// Creting a Class in CPP is similar to java
class Empolyee
{
public: // Defining Attributes
    int age;
    string name;
    Empolyee(string a, int b)
    {
        this->name = a;
        this->age = b; // Making an Constructor Can be override with many COnstrutre for different input
        this->SecreatPassword = "DG_BG1100n";
    }
    void printdetails()
    {
        cout << "The name of our First Employee is: " << this->name << " , he is just " << this->age << endl;
    }
    void getPassewrd(){
        cout<<this->SecreatPassword<<endl;
    }
    private:
    string SecreatPassword;
    };
    // here , Like inhertitance You can create a subcalss
    class Enginner : public Empolyee
    {
        int salary;
    };
int main()
{
    // BASIC INTRODUCTION
    /*
    cout<<"Hello nishu"<<"nishubaby"<<endl;
    cout<<"this is the end";
    int marksInMaths = 98;
    cout<<"The Marks in Math is: "<<marksInMaths;
    Variables in C++ short,int long ,long long range increasses L to R
    in these Variable below the Precision increases down the lines
    float score = 98.3;
    double score1 = 98.34;
    double const score3 = 98.3456;
    score3 = 98.34567;
    cout<<score3;
    */

    // HOW TO TAKE INPUT FROM USER IN CPP Declear your inputs first then use cin>>
    /*
    int a , b ;
    cout<<"Entere the First Number:"<<endl;
    cin>>a;
    cout<<"Entere the First Number:"<<endl;
    cin>>b;
    cout<<"Sum of a and b is: "<<a + b<<endl;
    cout<<"Difference of a and b is: "<<a - b<<endl;
    cout<<"Product of a and b is: "<<a * b<<endl;
    cout<<"Division of a and b is: "<<(float) a / b<<endl;
    */
    // if - else works entirely same as if else in java
    /*
    int a;
    cout<<"Enter Your Age"<<endl;
    cin>>a;
    if (a>180)
    {
     cout<<"Bhai marja thoda sa"<<endl;
    }else if(a>18) {
     cout<<"Yeah you can vote"<<endl;
    }else{
     cout<<"Chothi bachhi ho kya"<<endl;
    }
    */
    // Switch Statment in Cpp - Same as Java no Major Change Except some SyntaXX
    /*
    int age;
    cout << "Enter Your Age" << endl;
    cin >> age;
    switch (age)
    {
    case 12:
        cout << "You are 12 years old"<<endl;
        break;
    case 8:
        cout << "You are 8 years old"<<endl;
        break;
    default:
        cout << "You are neither 12 nor 8"<<endl;
        break;
    }
    */
    // Loops in cpp
    /*int i = 0 ;
    while (i<33){
     cout<<"Loop is Looping"<<endl;
     i = i + 1 ;
    }*/
    // Same Thing Can be Achvied by Do-while Loop(This Runs at least one time no matter what)
    /*
    int i =0;
    do{
     cout<<"Do loop is Doing"<<endl;
     i = i + 1;
    } while (i<32);
    */
    // Same Thins Can Be Achived By For Loop
    /*
    for(int i = 0;i < 30;i++){
     cout<<"For Loop is Looping"<<i<<endl;
    }
    */
    // Using return type Func
    /*cout<<add(33,66)<<endl;*/
    // Arrays in CPP Can be used like this in order to store data
    /*
    int arr[6] ;
    for (size_t i = 0; i < 6; i++)
    {
      cout<<"Please Enter the marks "<<i+1<<"th Student"<<endl;
      cin>>arr[i];
    }
    for (size_t i = 0; i < 6; i++)
    {
      cout<<"The marks of "<<i+1<<"th Student is"<<arr[i]<<endl;
    }
      return 0;
    */
    // Now, an implementation of 2D array---> you can Create array of any size and dimension
    /*
    int ar2d[2][3]= {
        {23, 34, 45},
        {34, 556, 67}};
    */
    // ----> Like in order to print
    /*
    for (int i = 0; i < 2 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ar2d[i][j]<<" ";
        }cout<<endl;
    }
    */
    // Typecasting --> Changing the Variable type (Final Variable Type)
    /*
    float a = 45.6768;
    cout<<"Printing this in int: "<<(int) a<<endl;
    */
    // Strings and it's Basic Methods
    /*
    string name = "Rajesh";
    cout<<"the name is : "<<name<<endl;
    cout<<"the name of length is : "<<name.length()<<endl; // Returns the siz od String name
    cout<<"the name is : "<<name.substr(0,3)<<endl; //substr(a,b)--> Starts with a reutrns next b value's
    */
    // Pointer's Concept in CPP-->Used to Store the Location(Storage) of the Variable
    /*
    int e = 23;
    int* ptra;   // * means its an location Pointer
    ptra = &e;  // &a = LOcation where a is stored
    cout<<ptra<<endl;
    cout<<*ptra<<endl;// *(pointer location) Prints Whatever Stored There
    cout<<&e<<endl;// Prints Location Here
    */
    // Class & Objects--> An Object Must be intialised in order to run use Class Methods
    /*
    Empolyee nishu;
    nishu.name =  "Utkarsh Mudgal";// Declearing Attributes of the Object
    nishu.age = 20 ;
    */
    // Declearation of the Object can be done with Constructor If its intialsed in the class

    Empolyee nishu("nishkarsh mudgal",20);
    nishu.printdetails();// using the class Employee Methode any Methods can be used
    
    //Like you can't Access Private Variable Directly Instead you have to use Getter for That
    // cout<<nishu.SecreatPassword<<endl; // Gives an error but  
    nishu.getPassewrd();
}