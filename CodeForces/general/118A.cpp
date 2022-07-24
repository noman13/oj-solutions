//https://codeforces.com/contest/118/problem/a
//cf submit -f 118a.cpp 118a
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
    //optimize();
    string s, ans;
    cin >> s;
    int i, sz;
    sz = s.size();
    for(i=0; i<sz; i++){
        char c;
        c = s[i];
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'||c=='y'||c=='Y'){
            continue;
        }
        else{
            ans+='.';
            c = tolower(c);
            ans+=c;
        }
    }
    cout << ans << endl;
    return 0;
}


/*
SAMPLE I/O

*/
