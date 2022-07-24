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


int main()
{
    optimize();
    int t, i, j, x, m, n;
    cin >> t;
    while(t--){
        cin >> x >> n >> m;
        int mn, nm;
        int pivot = x;
        bool f = false;
        for(i=0; i<n; i++){
            pivot = ((pivot)/2) +10;
            //cout << pivot << endl;
        }
        if(pivot<=0) f = true;
        pivot-= m*10;
        if(pivot<=0) f = true;

        pivot = x;
        pivot-= m*10;
        if(pivot<=0) f = true;
        for(i=0; i<n; i++){
            pivot = ((pivot)/2) +10;
        }
        if(pivot<=0) f = true;

        if(f){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
