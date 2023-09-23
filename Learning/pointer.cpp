/*Concept of Pointers in CPP*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    int x = 4;
    int *p_x = &x;
    cout<<"Address of x:"<<&x<<endl;//Address of x     
    cout<<"Address of x:"<<p_x<<endl;// Same but with pointer
    cout<<"Value at x+1:"<<p_x+1<<endl;// Skips the current four bytes tell 
    cout<<"Val of *p_x:"<<*p_x<<endl;// Prints the value stored at p_x
    *p_x += 1;
    cout<<"Val of *p_x:"<<*p_x<<endl;// if Changes the value at *p_x Stored values gets changed
    int **p_p_x = &p_x; //Concept of Double Pointer-Stroing the address of p_x
    cout<<"Val of p_p_x;"<<p_p_x<<endl;
    cout<<"Val of *p_p_x;"<<*p_p_x<<endl;// Prints the address value of x
    cout<<"Val of **p_p_x;"<<**p_p_x<<endl;// Prints the value of stored at *p_p_x
    **p_p_x = 13; // Value Changed By Double Pointer--> Hue Hue  
    cout<<"Val of x:"<<x<<endl;
    return 0;
}