//cf submit -f 746D.cpp 746D
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
    ll n, k, a, b, i, j;
    cin >> n >> k >> a >> b;
    char G = 'G', B = 'B';
    bool f = true;
    string ans;
    if(a>b) swap(a,b), swap(G, B); 
    if(b/(double)k>a+1) f = false;
    else if(b==0 && a>k) false;
    else if(b==0 && a<=k){
        for(i=0; i<a; i++){
            cout << G;
        }
    }
    else{
        ll cnt = 0;
        for(i=0; i<n; i++){
            if(b>a && cnt<k){
                cout << B;
                b--;
                cnt++;
            }
            else{
                cout << G;
                a--;
                cnt = 0;
            }
        }
    }
    if(!f) cout << "NO";
    else cout << ans;
    

    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
