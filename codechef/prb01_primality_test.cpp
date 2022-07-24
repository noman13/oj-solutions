#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
#define endl "\n"
#define all(a) a.begin(),a.end()
#define allr(a) a.begin(),a.end(),greater<int>()


bool isPrime(ll n)
{
    if(n==1) return false;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}


int main()
{
    optimize();
    int t, i, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(isPrime(n)) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
