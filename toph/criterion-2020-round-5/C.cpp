#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, j, k, pivot, x, y, z, dist;
    typedef pair< pair<int, int> , int> p;
    vector<p> v;
    vector<int> d;
    cin >> t;
    for(i=1; i<=t; i++){
        cin >> n;
        for(j=0; j<n; j++){
            cin >> x, y, z;
            v.pb(mp(mp(x,y), z));
        }
        cout << "Case #1:\n" << 0 << "\n";

        for(j=0; j<n; j++){
            for(k=j+1; k<n; k++){
                x = abs(v[j].first.first-v[k].first.first);
                y = abs(v[j].first.second-v[k].first.second);
                z = abs(v[j].second-v[k].second);
                dist = x+y+z;
            }
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
