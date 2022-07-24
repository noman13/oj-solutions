//cf submit -f 1395A.cpp 1395A
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
    int t, r, g, b, w;
    cin >> t;
    while(t--){
        cin >> r >> g >> b >> w;
        bool f=false;
        if(r%2==0 && g%2==0 && b%2==0 && w%2==0) f = true;
        else if(r%2!=0 && g%2!=0 && b%2!=0 && w%2!=0) f = true;
        else if(r%2!=0 && g%2==0 && b%2==0 && w%2==0) f = true;
        else if(r%2==0 && g%2!=0 && b%2==0 && w%2==0) f = true;
        else if(r%2==0 && g%2==0 && b%2!=0 && w%2==0) f = true;
        else if(r%2==0 && g%2==0 && b%2==0 && w%2!=0) f = true;
        else if(r%2==0 && g%2!=0 && b%2!=0 && w%2!=0 && r!=0) f = true;
        else if(r%2!=0 && g%2==0 && b%2!=0 && w%2!=0 && g!=0) f = true;
        else if(r%2!=0 && g%2!=0 && b%2==0 && w%2!=0 && b!=0) f = true;
        else if(r%2!=0 && g%2!=0 && b%2!=0 && w%2==0) f = true;

        if(f) cout << "Yes\n";
        else cout << "No\n";
    }
    

    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
