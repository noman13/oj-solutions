#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, i, n, s, k, pivot;
    cin >> t;
    while(t--){
        cin >> n >> s >> k;
        map<int, bool> mp;
        for(i=0; i<k; i++){
            cin >> pivot;
            mp[pivot] = 1;
        }

        int ans = 1e9;
        int m = min(n, s+1003);

        for(i=s; i<=m; i++){
            if(!mp[i]){
                ans = min(ans, abs(i-s));
                break;
            }
        }
        m = max(1, s - 1003);
        for(i=s; i>=m; i--){
            if(!mp[i]){
                ans = min(ans, abs(i-s));
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
