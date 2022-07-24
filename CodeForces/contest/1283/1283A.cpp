//https://codeforces.com/contest/1283/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define PI acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, h, m;
    cin >> t;
    while(t--){
        cin >> h >> m;
        cout << (60-m)+(23-h)*60 << "\n";
    }
    return 0;
}



/*
SAMPLE I/O

*/
