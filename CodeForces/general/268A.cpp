#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, h, g, i, j, sum=0;
    cin >> n;
    vector<pair<int, int> > v;
    for(i=0; i<n; i++){
        cin >> h >> g;
        v.pb(mp(h, g));
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(v[i].first == v[j].second){
                sum++;
            }
        }
    }
    cout << sum << "\n";
    return 0;
}


/*
SAMPLE I/O


*/
