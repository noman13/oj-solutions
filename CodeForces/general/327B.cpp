//cf submit -f 327B.cpp 327B
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
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

int is_prime[10000000];
int prime[10000000];

void sieve()//modified
{
    is_prime[0] = 0;
    is_prime[1] = 0;
    for(int i = 2; i<=10000000; i++){
        is_prime[i] = 1;
    }
    for(int i=2; i*i<=10000000; i++){
        if(is_prime[i]){
            for(int j = i*i; j<=10000000; j+=i){
                is_prime[j] = 0;
            }
        }
    }
    for(int i=0, j=0; i<=10000000; i++){
        if(is_prime[i]){
            prime[j] = i;
            j++;
        }
    }
}

//cf submit -f 327B.cpp 327B
int main()
{
    fastIO();
    sieve();

    int n, i;
    cin >> n;
    for(i=0; i<n; i++){
        cout << prime[i] << " ";
    }



    return 0;
    //cf submit -f 327B.cpp 327B
}

/*
******SAMPLE I/O******
in:

out:

*/
