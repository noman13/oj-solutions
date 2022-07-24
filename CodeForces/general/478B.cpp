#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"

#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

ll nc2(ll a){
	return a*(a-1)/2;
}

int main()
{
    optimize();
    ll n, m, Kmin, Kmax, perGrp, outStand;
    cin >> n >> m;
    Kmax = (n-m+1) * (n-m) / 2;
    perGrp = n/m;
    outStand = n%m;
    Kmin = outStand*nc2(perGrp+1) + (m-outStand)*nc2(perGrp);
    cout << Kmin << " "<< Kmax << endl;
    return 0;
}


/*
SAMPLE I/O

*/
