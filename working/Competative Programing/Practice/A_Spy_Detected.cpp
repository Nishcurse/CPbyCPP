/*"/problem/1512/A" By nishu ❤️ T-1 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, p;
        cin >> c;
        int arr[c];
        for (int i = 0; i < c; i++)
        {
            cin >> arr[i];
        }
        // for (int i = 0; i < c; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }cout<<"\n";

        for (int i = 0; i < c-1; i++){
            if(arr[i]!=arr[i+1]){
                p=i;
                // cout<<"i hun mein"<<i<<endl;
                break;
            }
        }
        
        // for (int i = 0; i < c; i++)
        // {
            if(p==0 && arr[p]!=arr[c-1]){
                cout<<p+1<<endl;
            }else{
                cout<<p+2<<endl;
            }
        // }
        
         
    }
    return 0;
}