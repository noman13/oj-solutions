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
    int n, m, i;
    map<string, string> mpp;
    string s1, s2, s;
    cin >> n >> m;
    for(i=0; i<m; i++){
        cin >> s1 >> s2;
        if(s1.size()<=s2.size()){
            mpp[s1] = s1;
        }
        else{
            mpp[s1] = s2;
        }
    }
    for(i=0; i<n; i++){
        cin >> s;
        cout << mpp[s] << " ";
    }


    cout << endl;
    return 0;
}


/*
SAMPLE I/O

*/
