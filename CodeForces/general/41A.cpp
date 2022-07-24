//https://codeforces.com/contest/41/problem/a
//cf submit -f 41a.cpp 41a
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
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
    string s, t;
    cin >> s >> t;
    reverse(all(s));
    if(t==s) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}


/*
SAMPLE I/O

*/
