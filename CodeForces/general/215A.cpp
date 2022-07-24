//https://codeforces.com/contest/215/problem/a
//cf submit -f 215a.cpp 215a
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
    int n, m, i, j, pivot;
    vector<int> a, b;
    map<int, int> mpp;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        a.pb(pivot);
    }
    cin >> m;
    for(i=0; i<m; i++){
        cin >> pivot;
        b.pb(pivot);
    }
    sort(all(a));
    sort(allr(b));
    int mx = INT_MIN;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(b[i]%a[j]==0){
                pivot = b[i]/a[j];
                mpp[pivot]++;
                mx = max(mx, b[i]/a[j]);
                //cout << "b[i] " << b[i] << " a[j] " << a[j] << " mx " << mx << "\n";  
            }
        }
    }
    cout << mpp[mx];

    return 0;
}


/*
SAMPLE I/O

*/
