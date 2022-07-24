#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, j, x, y;
    cin >> t;

    while(t--){
        vector<pair<int, int> > v;
        cin >> n;
        for(i=0; i<n; i++){
            cin >> x >> y;
            v.pb(mp(x, y));
        }
        sort(v.begin(), v.end());
        if(n==1){
            cout << "YES" << "\n";
            for(i=0; i<x; i++){
                cout << "R";
            }
            for(i=0; i<y; i++){
                cout << "U";
            }
            cout << "\n";
            goto jump_bottom;
        }
        for(i=0; i<n-1; i++){
            //cout << v[i].first<< " " << v[i].second << "\n";
            if(v[i].second > v[i+1].second){
                cout << "NO" << "\n";
                goto jump_bottom;
            }
        }
        cout << "YES" << "\n";
        x=v[0].first;
        y=v[0].second;
        for(j=0; j<x; j++){
            cout << "R";
        }
        for(j=0; j<y; j++){
            cout << "U";
        }
        for(i=1; i<n; i++){
            if(v[i].first==v[i-1].first){
                y=v[i].second - v[i-1].second;
                for(j=0; j<y; j++){
                    cout << "U";
                }
            }
            else{
                x=v[i].first - v[i-1].first;
                y=v[i].second - v[i-1].second;
                for(j=0; j<x; j++){
                    cout << "R";
                }
                for(j=0; j<y; j++){
                    cout << "U";
                }
            }
        }
        cout << "\n";
    jump_bottom:
        continue;
    }
    return 0;
}


/*
SAMPLE I/O

input
3
5
1 3
1 2
3 3
5 5
4 3
2
1 0
0 1
1
4 3

output
YES
RUUURRRRUU
NO
YES
RRRRUUU

*/
