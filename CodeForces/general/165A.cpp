#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    optimize();
    int n, i, j, x, y, cnt=0;
    typedef pair<int, int> p;
    vector<p> v;

    cin >> n;
    for(i=0; i<n; i++){
        cin >> x >> y;
        v.pb(mp(x, y));
    }

    for(i=0; i<n; i++){
        int r=0, l=0, u=0, d=0;
        for(j=0; j<n; j++){
            if(i==j) continue;
            if(v[j].first>v[i].first && v[j].second==v[i].second){
                r++;
            }
            if(v[j].first<v[i].first && v[j].second==v[i].second){
                l++;
            }
            if(v[j].first==v[i].first && v[j].second<v[i].second){
                d++;
            }
            if(v[j].first==v[i].first && v[j].second>v[i].second){
                u++;
            }
        }
        if(r>0 && l>0 && d>0 && u>0){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}


/*
SAMPLE I/O

*/
