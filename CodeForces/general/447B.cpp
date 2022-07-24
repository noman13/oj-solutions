//https://codeforces.com/contest/447/problem/b
//cf submit -f 447b.cpp 447b
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
#define allr(a) a.begin(),a.end(), greater<int>()


int main()
{
    optimize();
    string s;
    int k, i, j, pivot, sum=0, sz;
    vector<int> v;
    cin >> s >> k;
    for(i=0; i<26; i++){
        cin >> pivot;
        v.pb(pivot);
    }

    sz = s.size();
    for(i=0; i<sz; i++){
        sum += v[s[i]-'a']*(i+1);
    }
    sort(allr(v));
    for(i=0; i<k; i++){
        sum += v[0]*(sz+1);
        sz++;
    }
    cout << sum;
    return 0;
}


/*
SAMPLE I/O

*/
