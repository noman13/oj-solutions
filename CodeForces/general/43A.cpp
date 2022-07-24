//https://codeforces.com/contest/43/problem/a
//cf submit -f 43a.cpp 43a
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


int main()
{
    optimize();
    int n, i;
    string s;
    map<string, int> mpp;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> s;
        mpp[s]++;
    }

    map<int, string, greater<int> > m;
    for(auto const &it : mpp){
        m.insert(mp(it.second, it.first));
    }

    map<int, string, greater<int> > :: iterator it;
    it = m.begin();
    cout << (*it).second;

    return 0;
}


/*
SAMPLE I/O

*/
