#include <iostream>
#include <string>
using namespace std;
int main(){
    int noOfStones,output;
    string StonePattern;
    cin>>noOfStones;
    cin>>StonePattern;
    for (size_t i = 0; i < noOfStones-1; i++)
    {
        if (StonePattern.at(i)==StonePattern.at(i+1))
        {
            output = output + 1;
        }
        
    }
    cout<<output<<endl;
    return 0;
}