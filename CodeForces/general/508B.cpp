//https://codeforces.com/contest/508/problem/b
//cf submit -f 508b.cpp 508b
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
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

    int i, sz;
    string s;
    char ch;
    bool f = true;
    vector<pair<int, char> > v;
    
    cin >> s;
    sz = s.size();
    ch = s[sz-1];
    //cout << ch << endl;
    for(i=0; i<sz; i++){
        if(s[i]%2==0){
            v.pb(mp(i,s[i]));
        }
    }

    sz=v.size();
    if(sz==0) f = false;
    for(i=0; i<sz; i++){
        if((i<=sz-2 && v[i].second<ch) || (i==sz-1)){
            s[v[i].first] = ch;
            s[s.size()-1] = v[i].second;
            break;
        }
    }
    
    if(!f) cout << "-1" << endl;
    else cout << s << endl;
    return 0;
}


/*
SAMPLE I/O

*/
