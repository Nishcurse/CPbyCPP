#include <bits/stdc++.h>
#define NishuisYours ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Testcases int t;cin>>t;while(t--)
typedef long long int ll;
using namespace std;

int main() {
    NishuisYours
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Testcases {
        ll a,sum=0;
        cin >> a;
        ll arr[2 * a];

        for (int i = 0; i < 2 * a; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + 2 * a);

        vector<pair<ll, ll>> vec;

        for (int i = 0; i < a; i++) {
            vec.push_back(make_pair(arr[i], arr[2 * a - i - 1]));
        }

for (ll i=0;i<a-1;i++) {
            sum += abs(vec[i].first - vec[i + 1].first) + abs(vec[i].second - vec[i + 1].second);
        }
        cout<<sum<<"\n";
        for (const pair<ll, ll>& p : vec) {
            cout << p.first << " " << p.second << "\n";
        }
    }

    return 0;
}
