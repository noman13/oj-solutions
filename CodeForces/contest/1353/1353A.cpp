//https://codeforces.com/contest/1353/problem/a
//cf submit -f 1353a.cpp 1353a
#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
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

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define sz(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
           

int main()
{
    fastIO();
    int t, n, m, i, j;
    cin >> t; 
    while(t--){
        cin >> n >> m;
        int ans;
        if(n==1) ans = 0;
        else if(n==2) ans = m;
        else{
            ans = 2*m;
            
        }
        cout << ans<<endl;
    }


    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
