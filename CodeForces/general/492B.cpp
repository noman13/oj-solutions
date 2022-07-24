#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
#define all(v) v.begin(),v.end()
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    optimize();
    double n, l, i, j, pivot;
    vector<double> v;
    cin >> n >> l;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    sort(all(v));
    double mx = max(abs(0-v[0]), abs(l-v[n-1]));
    for(i=0; i<n-1; i++){
        pivot = abs(v[i]-v[i+1])/2;
        if(pivot>mx){
            mx = pivot;
        }
    }
    cout << setprecision(15)<<mx ;
    return 0;
}


/*
SAMPLE I/O

*/
