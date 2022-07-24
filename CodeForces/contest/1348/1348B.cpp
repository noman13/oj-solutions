//https://codeforces.com/contest/1348/problem/b
//cf submit -f 1348b.cpp 1348b
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
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

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define sz(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
           

int main()
{
    fastIO();
    int t, n, k, i, j, pivot;
    cin >> t;
    while(t--){
        cin >> n >> k;
        set<int> st;
        for(i=0; i<n; i++){
            cin >> pivot;
            st.insert(pivot);
        }
        int siz;
        siz = sz(st);
        if(siz>k){
            cout << -1<<endl;
            continue;
        }
        else if(siz==k){
            vi ans;
            for(i=0; i<n; i++){
                for(auto j : st){
                    pivot = j;
                    ans.pb(j);
                }
            }
            cout << sz(ans)<< endl;
            for(auto i : ans){
                cout << i << " ";
            }
            cout << endl;
            ans.clear();
        }
        else{
            vi ans;
            for(auto i : st){
                pivot = i;
                ans.pb(pivot);
            }
            int dif;
            dif = abs(k-siz);
            pivot = 1;
            for(i=0; i<dif; i++){
                ans.pb(pivot);
                pivot++;
            }
            sort(all(ans));
            vi res;
            for(i=0; i<n; i++){
                for(auto j : ans){
                    pivot = j;
                    res.pb(j);
                }
            }
            cout << sz(res)<< endl;
            for(auto i : res){
                cout << i << " ";
            }
            cout << endl;

            ans.clear();
            res.clear();
        }
    }

    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
