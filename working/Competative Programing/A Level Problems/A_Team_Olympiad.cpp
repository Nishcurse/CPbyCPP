// Worked Fine Ignore Cases Okay!
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    io
    int c;
    cin >> c;
    int arr[c];
    vector<int> math;
    vector<int> phy;
    vector<int> chi;
    
    for (int i = 0; i < c; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < c; i++)
    {
        if(arr[i]==1){
            math.push_back(i+1);
        }else if(arr[i]==2){
            phy.push_back(i+1);
        }else{
            chi.push_back(i+1);
        }
    }
    int msph = min({math.size(),phy.size(),chi.size()});
    cout<<msph<<endl;
    for(int i=0;i<msph;i++){
        cout<<math[i]<<" "<<phy[i]<<" "<<chi[i]<<"\n";
    }
    return 0;
}