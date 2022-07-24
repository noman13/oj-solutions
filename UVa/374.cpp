#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

ll big_mod(ll a, ll b, ll m)
{
    if(b==0) return 1;
    if(b%2==0){
        ll ret = big_mod(a, b/2, m);
        return ((ret%m)*(ret%m))%m;
    }
    else return ((a%m)*big_mod(a, b-1, m)%m)%m;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int b, p, m;
    while(cin >> b >> p >> m){
        cout << big_mod(b, p, m) << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
