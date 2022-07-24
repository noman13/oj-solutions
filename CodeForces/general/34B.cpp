//https://codeforces.com/contest/34/problem/b
//cf submit -f 34b.cpp 34b
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,fma,tune=native")
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
    int n, m, i, j, pivot;
    vector<int> v;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    sort(all(v));
    int sum = 0;
    for(i=0; i<m; i++){
        if(v[i]<=0) sum+=v[i];
    }
    cout << abs(sum);
    return 0;
}

/*
SAMPLE I/O

*/
