//https://codeforces.com/contest/1352/problem/b
//cf submit -f 1352b.cpp 1352b
#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction(x) cout.unsetf(ios::floatfield); cout.precision(x); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

template<typename T> T sqr(T x) { return x * x; }

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

const double PI = acos(-1);
const double eps = 1e-9;

#define mem(arr,val) memset(arr,val,sizeof(arr))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

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
    ll t, n, k, i, mod, res, pivot;
    cin >> t;
    while(t--){
        cin >> n>> k;
        ll N , K;
        N = n;
        K = k;
        bool f = true;
        vi ans;
        if(k>n || !(k%2==n%2) || !((k*2)%2==n%2)) f = false;
        if(n%2==0 && k%2==0 && n>=k){
            f = true;
            for(i=1; i<k; i++){
                ans.pb(1);
                n--;
            }
            if(n>0) ans.pb(n);
        }
        n = N;
        k = K;
        if(n%2==0 && k%2!=0 && n>=k){
            if(n/2>=k) {
                f = true;
                for(i=1; i<k; i++){
                    ans.pb(2);
                    n-=2;
                }
                if(n>0) ans.pb(n);
            }
            else{
                f = false;
            }
            
        }
        n = N;
        k = K;
        if(n%2!=0 && k%2==0 && n>=k){
            f = false;
        }
        n = N;
        k = K;
        if(n%2!=0 && k%2!=0 && n>=k){
            f = true;
            for(i=1; i<k; i++){
                ans.pb(1);
                n--;
            }
            if(n>0)ans.pb(n);
        }



        if(f) cout << "YES\n";
        else{
            cout << "NO\n";
            continue;
        }
        for(auto i : ans){
            cout << i << " ";
        }
        ans.clear();
        cout << endl;

    }


    return 0;
}

/*
******SAMPLE I/O******
in:
9
10 2 
10 3
11 2
11 3
3 11
10 10
11 11
1 1
2 2

out:

*/
