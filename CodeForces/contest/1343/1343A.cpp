//https://codeforces.com/contest/1343/problem/A
//cf submit -f 1343a.cpp 1343A
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
ll binpow(ll a, ll b)
{
    ll res = 1;
    while(b > 0){
        if(b&1) res = res * a;
        a = a * a;
        b = b >> 1;
    }
    return res;
}

int main()
{
    optimize();
    int t, n, k, i, j, pivot, sum, ans;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 3;
        for(i=0; i<33; i++){
            //cout << "sum "<< sum << endl;
            if(n%sum==0){
                ans = n/sum;
                break;
            }
            sum+=binpow(2,i+2);
        }
        cout << ans << endl;
        
    }
    return 0;
}


/*
SAMPLE I/O

*/
