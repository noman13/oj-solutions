#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, m, i, j, pivot, ans;
    vector<int> v;
    cin >> n >> m;
    for(i=0; i<m; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    ans = v[0]-1;
    for(i=1; i<m; i++){
        if(v[i]>=v[i-1]){
            ans+=v[i]-v[i-1];
        }
        else{
            ans+=n-v[i-1]+v[i];
        }
    }
    cout << ans << "\n";
    return 0;
}


/*
SAMPLE I/O

*/
