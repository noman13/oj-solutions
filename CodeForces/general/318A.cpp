#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, k, i, pivot;
    vector<ll> v;
    cin >> n >> k;

    if(n%2==0){//n is even
        if(n==k){
        cout << n << "\n";
        return 0;
        }
        else if(k<=n/2){
            cout << 2*k-1 << "\n";
        }
        else{
            cout << 2*(k%(n/2)) << "\n";
        }
    }
    else{//n is odd
        if(k<=(n+1)/2){
            cout << 2*k-1 << "\n";
        }
        else{
            cout << 2*(k%((n+1)/2)) << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O


*/
