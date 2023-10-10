/*Problem-->"/problemset/problem/996/A" By Nishuuu */
#include <bits/stdc++.h>
using namespace  std ;
int main() {
    int number,output,c;
    cin>>number;
    output =0;
    // we have notes of 1,5,10,20,100
    while(number>0){
        c=0;
        if(number >100){
        c = number / 100 ;
        number = number % 100;
        output = output + c ;
        }else if (number >= 20){
            c = number/20;
            number = number%20;
            output = output + c ;
        }else if (number >= 10){
            c = number/10;
            number = number%10;
            output = output + c ;
        }else if (number >= 5){
            c = number/5;
            number = number%5;
            output = output + c ;
        }else if (number >= 1){
            output = output + number;
            number =0 ;
        }
    }
    cout<<output<<endl;
    return 0;
}