//cf submit -f 342A.cpp 342A
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
#define pb push_back
#define mp make_pair
#define endl "\n"
#define sz(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()

const double PI = acos(-1);
const double eps = 1e-9;
#define inf 1000000000
#define infll 1000000000000000000

bool compfunc(const pair<int, int> &a, const pair<int, int> &b){
    if(a.first < b.first) return true;
    if(a.first == b.first) return a.second > b.second;
    else return false;
}

ll MOD(ll x, ll y) { if(x>=0) return x%y; else{ ll z=abs(x/y); z++; z=y*z; x=x+z; return x%y; } }          
#define mod 1000000007

template<typename T> T sqr(T x) { return x * x; }
template<typename T> T cl(T x, T y) { if((x/y)*y < x) return (x/y)+1; else return x/y; }
double sind(double x) { return sin( x*PI/180 ); }
double cosd(double x) { return cos( x*PI/180 ); }
double tand(double x) { return tan( x*PI/180 ); }
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))


int main()
{
    fastIO();
    int n, i, j, x;
    map<int, int> mpp;
    bool f = true;
    vector<string> v;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        mpp[x]++;
    }
    if(mpp[5]>0 || mpp[7]>0) f = false;
    else{
        while(mpp[1]>0 && mpp[2]>0 && mpp[4]>0){
            v.pb("1 2 4");
            mpp[1]--;
            mpp[2]--;
            mpp[4]--;
        }
        while(mpp[1]>0 && mpp[2]>0 && mpp[6]>0){
            v.pb("1 2 6");
            mpp[1]--;
            mpp[2]--;
            mpp[6]--;
        }
        while(mpp[1]>0 && mpp[3]>0 && mpp[6]>0){
            v.pb("1 3 6");
            mpp[1]--;
            mpp[3]--;
            mpp[6]--;
        }
        for(auto i : mpp){
            if(i.ss > 0){
                f = false;
                break;
            }
        }
    }
    if(!f) cout << -1;
    else{
        for(auto i : v){
            cout << i << endl;
        }
    }

    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
