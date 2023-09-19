#include <bits/stdc++.h>
using namespace std;
int main(){
    int b;
    b=0;
    int arr[27] = {0};
    int arr2[27] = {0};
    string s,d,e;
    cin>>s>>d>>e;
    bool ji = (s.length()+d.length())==e.length();
    // Marking Done YO!
    for(int i=0;i<s.length();i++){
            arr[s[i]-'A']++;
    }
    for(int i=0;i<d.length();i++){
            arr[d[i]-'A']++;
    }
    for(int i=0;i<e.length();i++){
            arr2[e[i]-'A']++;
    }
    for(int i=0;i<27;i++){
        if(arr2[i]<arr[i]){
            b=1;
            break;
        }
    }
    if(b==1 || ji==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    // Now we have done the basic warak*


    // for(int i=1;i<d.length();i++){
    //         arr[s[i]-'A'] += 1;
    // }
    // string e;cin>>e;9
    // for(int i=1;i<e.length();i++){
    //         arr2[s[i]-'A'] += 1;
    // }
    // for(int i=0;i<27;i++){
    //     if (arr[i]!=0 && arr2[i]>=arr[i]){
    //         b++;
    //     }
    // }
    // for(int i=0;i<27;i++){
    //     if (arr[i]!=0){
    //         c++;
    //     }
    // }
    // cout<<"B-"<<c<<endl;
    // if(c==b){
    //     cout<<"YES";
    // }else{
    //     cout<<"NO";
    // }


}