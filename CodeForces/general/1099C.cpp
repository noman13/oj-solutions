//cf submit -f 1099C.cpp 1099C
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
#define allr(a) a.rbegin(),a.rend()099C

int main()
{
    fastIO();
    int n, i, j, can=0, flake=0, k;
    string s, ans;
    bool f;
    cin >> s >> k;
    n = sz(s);
    for(i=0; i<n; i++){
        if(s[i]=='?') can++;
        else if(s[i]=='*') flake++;
    }
    // cout << "n: " << n << " Can: " << can << " flake: " << flake<<endl;
    if(n-can-flake==k){
        f = true;
        for(auto i : s){
            if(i=='?' || i=='*') continue;
            else ans+=i; 
        }
    }
    else if(n-2*can-2*flake>k) f = false;
    else if(n-can<k){
        if(flake==0) f = false;
        else{
            int N = n, siz, temp;
            temp = n-can-flake;
            temp = k-temp;
            bool g = false;
            for(i=0; i<N; i++){
                if(s[i]!='*' && s[i]!='?') ans+=s[i];
                else if(s[i]=='*' && !g){
                    for(j=0; j<temp; j++){
                        ans+=s[i-1];
                    }
                    g = true;
                }
                else if((s[i]=='*' || s[i]=='?') && g) continue;
            }
        }
    }
    else{
        f = true;
        if(n-can-flake<k){
            int temp = n-can-flake;
            for(i=0; i<n; i++){
                if((s[i]=='*' && temp==k)|| s[i]=='?') continue;
                else if(s[i]=='*' && temp<k){
                    ans+=s[i-1];
                    temp++;
                }
                else ans+=s[i];
            }
        }
        else if(n-can-flake>k){
            // cout << "toooo";
            int temp = can+flake, N, cnt=0;
            N = n;
            n-= (can+flake);
            for(i=0; i<N; i++){
                if(cnt==k && temp==0) break;
                if(s[i]!='*' && s[i]!='?' && n>=k){
                    ans+=s[i];
                    cnt++;
                }
                else if((s[i]=='*' || s[i]=='?') && n>k){
                    ans.pop_back();
                    cnt--;
                    n--;
                    temp--;
                }
                else if((s[i]=='*' || s[i]=='?') && n==k){
                    temp--;
                    continue;
                }
            }
        }
    }
    // cout << "ans size: " << sz(ans) << endl;
    if(f){
        cout << ans;
    }
    else cout << "Impossible";


    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
