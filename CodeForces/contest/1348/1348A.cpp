//https://codeforces.com/contest/1348/problem/a
//cf submit -f 1348a.cpp 1348a
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

template<typename T> T sqr(T x) { return x * x; }

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<pii> vii;
typedef vector<pll> vll;

const double PI = acos(-1);
const double eps = 1e-9;

#define mem(arr,val) memset(arr,val,sizeof(arr))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define sz(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()

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
    fastIO();
    int t, i, j, pivot, n, a, b;
    cin >> t;
    while(t--){
        cin >> n;
        int sum_a = 0, sum_b = 0;
        sum_a  +=binpow(2, n);
        for(i=1;i<=(n/2)-1; i++){
            sum_a+=binpow(2, i);
        }
        for(i=n/2; i<n; i++){
            sum_b +=binpow(2, i);
        }
        cout << abs(sum_a-sum_b) << endl;
    }

    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
