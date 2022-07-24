//cf submit -f 1369c.cpp 1369c
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

bool compfunc(const pair<int, int> &a, const pair<int, int> &b){
    if(a.first < b.first) return true;
    if(a.first == b.first) return a.second > b.second;
    else return false;
}

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
    ll t, n, k, i, j, x, y;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vi v, w;
        for(i=0; i<n; i++){
            cin >> x;
            v.pb(x);
        }
        for(i=0; i<k; i++){
            cin >> x;
            w.pb(x);
        }
        sort(allr(v));
        sort(all(w));
        vii vp;
        for(i=0; i<k; i++){
            x = v[i];
            if(w[i]<2){
                vp.pb(mp(x,x));
            }
            else{
                vp.pb(mp(x,0));
            }
        }
        j = k;
        for(i=0; i<k; i++){
            x = w[i];
            if(w[i]==1) continue;
            else{
                j+=(x-2);
                vp[i].ss = v[j];
                j++;
            }
        }
        ll total=0;
        for(auto i : vp){
            total+=(i.ff+i.ss);
        }
        cout << total<<endl;
        // for(auto i : vp){
        //     cout << i.ff << " " << i.ss<<endl;
        // }
        // cout << endl;
    }


    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
