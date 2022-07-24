#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define PI acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << min(n, (n/k)*k+k/2) << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
