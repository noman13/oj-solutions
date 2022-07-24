//https://codeforces.com/contest/1282/problem/A
//cf submit -f 1282a.cpp 1282A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t, a, b, c, r, low, high, ans, dist, range;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> r;
        low=c-r;
        high=c+r;
        dist = abs(a-b);
        range = abs(low-high);

        if(a>b){
            swap(a,b);
        }
        if(high<=a || low>=b){
            cout << dist << "\n";
        }
        else if(low>=a&& high<=b){
            cout << abs(dist-range) << "\n";
        }
        else if((low<=a&& high>=b)){
            cout << 0 << "\n";
        }
        else if(low<a&&a<high&& high<b){
            cout << abs(b-high) << "\n";
        }
        else if(low<b&& b<high && low>a){
            cout << abs(low-a) << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
