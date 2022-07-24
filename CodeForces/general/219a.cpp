//https://codeforces.com/contest/219/problem/a
//cf submit -f 219a.cpp 219a
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
#define allr(a) a.begin(), a.end(), greater<int>()

int main()
{
    optimize();
    int k, i, j, pivot,sz;
    string s, ans, temp;
    bool f = true;
    map<char, int> mpp;
    cin >> k >> s;
    sz = s.size();
    for(i=0; i<sz; i++){
        mpp[s[i]]++;
    }
    for(auto i : mpp){
        if(i.second%k!=0) f = false;
    }
    if(!f) cout << -1;
    else{
        for (auto i : mpp){
            pivot = i.second;
            pivot/=k;
            for(j=0; j<pivot; j++){
                temp = i.first;
                ans+=temp;
            }
        }
        for(i=0;i<k; i++){
            cout << ans;
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
