//https://codeforces.com/contest/13xx/problem/a
//cf submit -f 13xxa.cpp 13xxa
#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
// #define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
// #define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

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

ll swapBits(ll num, ll pos1, ll pos2)
{
    //if te bits are different at pos1 and pos2 
    if((num & (1LL<<pos1) >> pos1) ^ (num & (1LL<<pos2) >> pos2)){
        num ^= (1LL << pos1);
        num ^= (1LL << pos2);
    }
    num ^= (1 << pos1);
    num ^= (1 << pos2);
    return num;
}          

int main()
{
    // fastIO();
    ll t, i, j, x, pos;
    cin >> t;
    for(i=1; i<=t; i++){
        cin >> x;
        for(j=0; j<=63; j++){
            if(x&(1LL<<j)){
                while(x&(1LL<<j)){
                    j++;
                    if(!(x&(1LL<<j))){
                        pos = j;
                        break;
                    }
                }
                break;
            }
        }
        x = swapBits(x, pos, pos-1);

        bitset<64> bit1(x);

        string s;
        s = bit1.to_string();
        sort(s.end()-pos, s.end());
        bitset<64> bit2(s);

        cout << "Case " << i << ": " << (ll)(bit2.to_ullong()) << endl;
    }


    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
