//https://codeforces.com/contest/330/problem/a
//cf submit -f 330a.cpp 330a
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
    int r, c, i, j, x=0, y=0;
    cin >> r >> c;
    vector<string> v;
    bool mark[c+1];
    mem(mark, 0);
    for(i=0; i<r; i++){
        string s;
        cin >> s;
        v.pb(s);
    }
    for(auto i : v){
        string s;
        bool f = 1;
        s = i;
        for(j=0; j<c; j++){
            if(s[j]=='S'){
                f = 0;
                mark[j]=1;
            }
        }
        if(f) x++;
    }
    for(i=0; i<c; i++){
        if(mark[i]==0) y++;
    }
    int ans=0;
    ans+=x*c;
    ans+=y*(r-x);

    cout << ans;



    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
