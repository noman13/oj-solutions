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
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

void dfs(int v);
int lcs(string x, string y);

vector<int> G[50+7];
int vis[50+7];

void dfs(int v){
    vis[v] = true;
    for(int child : G[v]){
        if(!vis[child]) dfs(child);
    }
}

int lcs(string x, string y){
    int n = x.size();
    int m = y.size();
    int L[m+1][n+1];

    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            if(i==0 || j==0) L[i][j] = 0;
            else if(x[i-1]==y[j-1]) L[i][j] = 1 + L[i-1][j-1];
            else L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[m][n];
}

int main()
{
    // fastIO();

    int n, i, j;
    string x, y;
    vector<string> v;

    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        v.pb(x);
    }
    for(i=0; i<n; i++){
        x = v[i];
        for(j=i+1; j<n; j++){
            y = v[j];
            if(x.size()==y.size()){
                int len = (int)ceil((double)x.size()*0.8);  
                if(lcs(x, y)>=len){
                    G[i].pb(j);
                    G[j].pb(i);
                }
            }
        }
    }
    int cc_count = 0;
    for(i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
            cc_count++;
        }
    }
    cout << cc_count << endl;

    

    return 0;
    
}

/*
******SAMPLE I/O******
Sample Input
3
abc
abc
bbc

Sample Output
2

Sample Input
4
abcd
abcd
abcd
abcd

Sample Output
1

Sample Input
4
abcde
abcdf
zbcdf
abcd

Sample Output
2


*/
