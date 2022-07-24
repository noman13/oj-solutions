//https://codeforces.com/contest/1201/problem/a
//cf submit -f 1201a.cpp 1201a
#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction(x) cout.unsetf(ios::floatfield); cout.precision(x); cout.setf(ios::fixed,ios::floatfield)
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

const double PI = acos(-1);
const double eps = 1e-9;

template<typename T> T sqr(T x) { return x * x; }
double sind(double x) { return sin( x*PI/180 ); }
double cosd(double x) { return cos( x*PI/180 ); }
double tand(double x) { return tan( x*PI/180 ); }
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

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
    int n, m, i, j, pivot;
    map<char, int> mpp;
    vi cnt, vm;
    vector<string> vstr;
    cin >> n >> m;
    for(i=0; i<n; i++){
        string s;
        cin >> s;
        vstr.pb(s);
    }
    for(i=0; i<m; i++){
        cin >> pivot;
        vm.pb(pivot);
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            string s;
            s = vstr[j];
            mpp[s[i]]++;
        }
        int mx = 0;
        for(auto k : mpp){
            mx = max(mx, k.second);
        }
        cnt.pb(mx);
        mpp.clear();
    }
    int ans = 0;
    for(i=0; i<m; i++){
        ans+=vm[i]*cnt[i];
    }
    cout << ans;


    


    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
