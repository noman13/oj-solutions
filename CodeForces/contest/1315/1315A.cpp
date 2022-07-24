#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, a, b, x, y, i, j, pivot, left, right, up, down;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        cin >> a >> b >> x >> y;

        left = b*x;
        right = b*(a-x-1);
        up = a*(b-y-1);
        down = a*y;
        v.pb(left);
        v.pb(right);
        v.pb(up);
        v.pb(down);
        sort(v.begin(), v.end());
        cout << v[3] << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
