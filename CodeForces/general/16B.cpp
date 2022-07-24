//https://codeforces.com/contest/16/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m, i, j, a, b, sz, ans=0, pivot, temp1, temp2;
    typedef pair<int, int> p;
    vector<p> v;
    cin >> n >> m;
    for(i=0; i<m; i++){
        cin >> a >> b;
        v.pb(mp(b, a));
    }
    sort(v.begin(), v.end(), greater<p>());

    for(i=0; i<m; i++){
        pivot = v[i].second;
        while(pivot>0 && n>0){
            ans+=v[i].first;
            pivot--;
            n--;
        }
    }
    cout << ans << "\n";
    return 0;
}


/*
SAMPLE I/O

*/
