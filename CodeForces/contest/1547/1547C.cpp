//https://codeforces.com/contest/1547/problem/C
//cf submit -f 1547C.cpp 1547C
#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction(x) cout.unsetf(ios::floatfield); cout.precision(x); cout.setf(ios::fixed,ios::floatfield)
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

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
#define pb emplace_back
#define mp make_pair
#define endl "\n"
#define sz(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()


bool compfunc(const pair<int, int> &a, const pair<int, int> &b){
    if(a.first < b.first) return true;
    if(a.first == b.first) return a.second > b.second;
    else return false;
}

#define inf 1000000000
#define infll 1000000000000000000
#define mod 1000000007
const double PI = acos(-1);
const double eps = 1e-9;
template<typename T> T sqr(T x) { return x * x; }
template<typename T> T cl(T x, T y) { if((x/y)*y<x) return (x/y)+1; else return x/y; }
template<typename T> T MOD(T x, T y) { if(x>=0) return x%y; else return (x+(y*(abs(x+y)+1)))%y; } 
double sind(double x) { return sin( x*PI/180 ); }
double cosd(double x) { return cos( x*PI/180 ); }
double tand(double x) { return tan( x*PI/180 ); }
bool eq(double x, double y) { return abs( x-y ) < 1e-9; }
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))


int main()
{
    fastIO();
    int t, k, n, m, i, j, x, y;
    cin >> t;
    while(t--){
        cin >> k >> n >> m;
        vi a, b, c;
        for(i=0; i<n; i++){
            cin >> x;
            a.pb(x);
        }
        for(i=0; i<m; i++){
            cin >> x;
            b.pb(x);
        }
        
        for(i=0, j=0; ; ){
            if(i==n || j==m) break;
            if(i+j>n+m-1) break;
            if(a[i]<=b[j]){
                x = a[i];
                c.pb(x);
                i++;
            }
            else{
                y = b[j];
                c.pb(y);
                j++;
            }
        }
        if(i==n){
            for(int q = j; q<m; q++) c.pb(b[q]);
        }
        else if(j==m){
            for(int q = i; q<n; q++) c.pb(a[q]);

        }
        // for(auto i : c) cout << i << " ";
        // cout << "\n";
        bool f = true;
        for(auto i : c){
            x = i;
            if(x == 0) k++;
            else if(x>k){
                f = false;
                break;
            }
        }
        if(f){
            for(auto i : c) cout << i << " ";
            cout << "\n";
        }
        else cout << -1 << endl;

    }

    

    return 0;
    //cf submit -f 1547C.cpp 1547C
}

/*
******SAMPLE I/O******
in:

out:

*/
