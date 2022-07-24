#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, i, j, sz, pivot;
    string s;
    vector<int> v, ans;
    cin >> t;
    while(t--){
        s.clear();
        v.clear();
        ans.clear();
        cin >> s;
        sz = s.size();
        v.pb(-1);

        for(i=0; i<sz; i++){
            if(s[i]=='R'){
                v.pb(i);
            }
        }
        v.pb(sz);
        sz = v.size();
        for(i=1; i<sz; i++){
            pivot=v[i]-v[i-1];
            ans.pb(pivot);
        }
        sort(ans.begin(), ans.end(), greater<int>());
        cout << ans[0] << "\n";

    }
    return 0;
}


/*
SAMPLE I/O

*/
