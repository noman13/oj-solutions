//https://codeforces.com/contest/27/problem/a
//cf submit -f 27a.cpp 27a
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
    int n, i, j, pivot;
    vector<int> v;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    sort(all(v));
    for(i=0; i<n; i++){
        if(v[i]!=i+1){
            break;
        }
    }
    cout << i+1;
    return 0;
}


/*
SAMPLE I/O

*/
