#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, m, i, j , pivot, mul;
    vector<ll> v;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    if(n<=m){
        mul=1;
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                mul *= abs(v[i]-v[j])%m;
                mul%=m;
            }
        }
        cout << mul << "\n";
    }
    else{
        cout << 0%m << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
