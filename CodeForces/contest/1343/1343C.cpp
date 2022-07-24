//https://codeforces.com/contest/1343/problem/C
//cf submit -f 1343c.cpp 1343C
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
#define endl "\n"
#define all(a) a.begin(),a.end()
#define allr(a) a.begin(),a.end(),greater<int>()


int main()
{
    optimize();
    int t, n, i, j, pivot;
    vector<int> v;
    vector<ll> s;
    cin >> t;
    while(t--){
        cin >> n;
        v.clear();
        s.clear();
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
        }
        for(i=0; i<n; i++){
            if(v[i]>0){
                ll mx = 0;
                while(v[i]>0 && i<n){
                    if(v[i]>=mx){
                        mx = v[i];
                    }
                    i++;
                }
                s.pb(mx);
                i--;
            }
            else{
                ll mx = -10000000007;
                while(v[i]<0 && i<n){
                    if(v[i]>mx){
                        mx = v[i];
                    }
                    i++;
                }
                s.pb(mx);
                i--;
            }
        }
        ll sum = 0;
        for(auto i : s){
            //cout << i << " ";
            sum +=i;
        }
        //cout << endl;
        cout << sum << endl;
    }
    return 0;
}


/*
SAMPLE I/O

*/
