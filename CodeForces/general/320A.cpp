//https://codeforces.com/contest/320/problem/a
//cf submit -f 320A.cpp 320A
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
    bool f = true;
    cin >> s;
    sz = s.size();
    if(s[0]!='1') f = false;
    for(i=1; i<sz; i++){
        if(s[i]=='1' || s[i]=='4') continue;
        else f = false;
    }
    int cnt=0;
    for(i=1;i<sz; i++){
        
        if(s[i]=='4') cnt++;
        else cnt = 0;
        if(cnt>=3){
            f = false; 
            break;
        }
    }
    if(f) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}


/*
SAMPLE I/O

*/
