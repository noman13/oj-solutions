//https://codeforces.com/contest/214/problem/a
//cf submit -f 214a.cpp 214a
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
    int n, m, i, j, cnt=0;
    cin >> n >> m;
    for(i=0; i<=n; i++){
        for(j=0; j<=m; j++){
            if((i*i)+j==n && i+(j*j)==m) cnt++;
        }
    }
    cout <<cnt;
    return 0;
}


/*
SAMPLE I/O

*/
