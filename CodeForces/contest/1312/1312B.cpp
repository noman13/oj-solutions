#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, j, pivot;
    vector<int> v;

    cin >> t;
    while(t--){
        v.clear();
        cin >> n;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
        }
        sort(v.begin(), v.end(), greater<int>());
        for(i=0; i<n; i++){
            cout << v[i]<< " ";
        }
        cout << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
