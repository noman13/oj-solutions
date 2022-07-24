#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, pivot;
    vector<int> v;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    sort(v.begin(), v.end(), greater<int>());
    cout <<v[0] << "\n";
    return 0;
}


/*
SAMPLE I/O

*/
