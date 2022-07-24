#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, j, pivot, mx=0;
    cin >> n;
    vector<int> a, b;
    for(i=0; i<n; i++){
        cin >> pivot;
        b.pb(pivot);
    }
    pivot = b[0];
    a.pb(pivot);
    for(i=0; i<n-1; i++){
        if(a[i]>mx){
            mx = a[i];
        }
        pivot = mx + b[i+1];
        a.pb(pivot);
    }
    for(i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}


/*
SAMPLE I/O

*/
