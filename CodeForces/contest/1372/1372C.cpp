//cf submit -f 1372C.cpp 1372C
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
#define inf 1000000000
#define infll 1000000000000000000

bool compfunc(const pair<int, int> &a, const pair<int, int> &b){
    if(a.first < b.first) return true;
    if(a.first == b.first) return a.second > b.second;
    else return false;
}

template<typename T> T sqr(T x) { return x * x; }
template<typename T> T cl(T x, T y) { if((x/y)*y < x) return (x/y)+1; else return x/y; }
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
    ll t, n, i, x;
    cin >> t;
    while(t--){
        cin >> n;
        vi v, vc;
        ll left = 0, right = n-1;
        ll ans;
        bool g = true;
        for(i=0; i<n; i++){
            cin >> x;
            v.pb(x);
            if(i+1!=x && g){
                left = i;
                g = false;
            }
        }
        vc = v;
        sort(all(vc));
        if(v == vc) ans = 0;
        else{
            bool f = false;
            for(i=n-1; i>left; i--){
                if(i+1!=v[i]){
                    right= i;
                    break;
                }
            }
            for(i=left; i<=right; i++){
                if(i+1==v[i]){
                    f = true;
                    break;
                }
            }
            if(f) ans = 2;
            else ans = 1;
        }
        cout << ans << endl ;
        // cout << left << " " << right << endl;
    }

    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
