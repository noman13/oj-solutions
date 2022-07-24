//https://codeforces.com/contest/1360/problem/c
//cf submit -f 1360c.cpp 1360c
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
    int t, n, i, j, pivot;
    cin >> t;
    while(t--){
        cin >> n;
        vi v;
        int odd=0, even=0;
        bool f = false;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
            if(pivot%2==0) odd++;
        }
        if(odd%2==0) f = true;
        else{
            sort(all(v));
            for(i=0; i<n-1; i++){
                if(v[i+1]-v[i]==1){
                    f = true;
                    break;
                }
            }
        }

        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
    


    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/