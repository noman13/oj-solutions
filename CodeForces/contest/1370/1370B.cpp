//cf submit -f 1370B.cpp 1370B
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
    int t, n, i, j, x, y;
    cin >> t;
    while(t--){
        cin >> n;
        vi v;
        vii ans;
        int odd=0, even=0;
        for(i=0; i<2*n; i++){
            cin >> x;
            v.pb(x);
            if(x%2==0) even++;
            else odd++;
        }
        if(odd%2==0 && even%2==0){
            int cnt=0;  
            for(i=0; i<2*n; i++){
                x = v[i];
                if(even!=0){
                    if(x%2==0){
                        v[i] = 0;
                        cnt++;
                        even--;
                    }
                }
                else{
                    v[i] = 0;
                    cnt++;
                    odd--;
                }
                if(cnt==2) break;
            }
        }
        else if(odd%2!=0 && even%2!=0){
            int cnt = 0;
            int f = 0;
            for(i=0; i<2*n; i++){
                x = v[i];
                if(x%2==0 && f !=1){
                    v[i]=0;
                    f = 1;
                    cnt++;
                    even--;
                }
                else if(x%2!=0 && f!=2){
                    v[i] = 0;
                    f = 2;
                    cnt++;
                    odd--;
                }
                if(cnt==2) break;
            }
        }
        // for(auto i : v){
        //     cout << i << " ";
        // }
        // cout << endl;
        int a, b;
        vi od, ev;
        for(i=0; i<2*n; i++){
            x = v[i];
            if(x!=0){
                if(x%2!=0){
                    od.pb(i+1);

                }
                else if(x%2==0){
                    ev.pb(i+1); 
                }
            }
        }
        int siz = sz(od);
        for(i=0; i<siz; i+=2){
            if(odd>0){
                a = od[i];
                b = od[i+1];
                ans.pb(mp(a,b));
                odd-=2;
            }
        }
        siz = sz(ev);
        for(i=0; i<siz; i+=2){
            if(even>0){
                a = ev[i];
                b = ev[i+1];
                ans.pb(mp(a,b));
                even-=2;
            }
        }
        for(auto i : ans){
            cout << i.ff << " " << i.ss << endl;
        }
        // cout << endl;
    }
    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
