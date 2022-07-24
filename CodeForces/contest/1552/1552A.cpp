//https://codeforces.com/contest/1552/problem/A
//cf submit -f 1552A.cpp 1552A
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

template<class T1, class T2> ostream &operator<<(ostream &os, const pair<T1, T2> &p) { return os << '{' << p.first << ", " << p.second << '}'; }
template<class T, class = decay_t<decltype(*begin(declval<T>()))>, class = enable_if_t<!is_same<T, string>::value>> ostream &operator<<(ostream &os, const T &c) { os << '['; for (auto it = c.begin(); it != c.end(); ++it){os << &", "[2 * (it == c.begin())] << *it;} return os << ']' <<endl; }
template<typename T> void dout(string name, T arg) { cerr << name << " = " << arg << endl; }
template<typename T1, typename... T2> void dout(string names, T1 arg, T2... args) { cerr << names.substr(0, names.find(',')) << " = " << arg << "\n"; dout(names.substr(names.find(',') + 2), args...); }
#ifdef LOCAL
    #define dbg(...) cerr << "\nLine " << __LINE__ <<"->\n"; dout(#__VA_ARGS__, __VA_ARGS__)
#else
    #define dbg(...) 
#endif

int main()
{
    fastIO();
    int t, n, i, j, x;
    cin >> t;
    while(t--){
        string s;
        cin >> n >> s;
        string temp = s;
        sort(all(temp));
        int cnt = 0;
        for(i=0; i<n; i++){
            if(s[i]!=temp[i]) cnt++;
        }
        cout << cnt << endl;
    }


    

    return 0;
    //cf submit -f 1552A.cpp 1552A
}

/*
******SAMPLE I/O******
in:

out:

*/
