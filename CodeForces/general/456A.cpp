//https://codeforces.com/contest/456/problem/a
//cf submit -f 456a.cpp 456a
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
#define endl "\n"
#define all(a) a.begin(),a.end()
#define allr(a) a.begin(),a.end(),greater<int>()



int main()
{
    optimize();
    int n, i, j, a, b, pivot;
    typedef pair<int, int> p;
    vector<p> v;
    bool f = false;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b;
        v.pb(mp(a, b));
    }
    sort(all(v));

    for(i=0; i<n-1; i++){
        if(v[i].second>v[i+1].second){
            f = true;
            break;
        }
    }
    if(f) cout << "Happy Alex";
    else cout << "Poor Alex";
    return 0;
}


/*
SAMPLE I/O

*/
