//https://codeforces.com/contest/1343/problem/B
//cf submit -f 1343b.cpp 1343B
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
    int t, n, i, j, pivot;
    vector<int> v;
    bool f;
    cin >> t;
    while (t--){
        cin >> n;
        v.clear();
        f = true;
        int sum=0;
        if((n/2)%2!=0) f = false;
        for(i=0; i<n; i+=2){
            v.pb(i+2);
        }
        for(i=0; i<n-2; i+=2){
            v.pb(i+1);
        }
        v.pb(i+(n/2)+1);
        if(!f) cout << "NO" << "\n";
        else{
            cout << "YES" << "\n";
            for(auto i : v){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    {
        /* code */
    }
    
    return 0;
}


/*
SAMPLE I/O

*/
