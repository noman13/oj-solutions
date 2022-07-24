//https://codeforces.com/contest/13xx/problem/a
//cf submit -f 13xxa.cpp 13xxa
#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
// #define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction(x) cout.unsetf(ios::floatfield); cout.precision(x); cout.setf(ios::fixed,ios::floatfield);
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

bool check(int x1, int y1, int x2, int y2, int x, int y)
{
    if( (x1<=x&&x<=x2) && (y1<=y&&y<=y2) ) return true;
    else return false;
}



int main()
{
    // fastIO();
    int t, i, j, x, y;
    cin >> t;
    for(i=1; i<=t; i++){
        int x1, y1, x2, y2, m;
        vii v;
        cin >> x1 >> y1 >> x2 >> y2 >> m;
        for(j=0; j<m; j++){
            cin >> x >> y;
            v.pb(mp(x,y));
        }
        cout << "Case " << i << ":\n";
        for(auto k : v){
            check(x1, y1, x2, y2, k.first, k.second) ? cout << "Yes\n" : cout << "No\n";
        }

    }


    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
