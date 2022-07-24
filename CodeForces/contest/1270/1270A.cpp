#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, k1, k2, i, j, pivot;
    vector<int> a, b;
    cin >> t;
    while(t--){
        cin >> n >> k1 >> k2;
        for(i=0; i<k1; i++){
            cin >> pivot;
            a.pb(pivot);
        }
        for(i=0; i<k2; i++){
            cin >> pivot;
            b.pb(pivot);
        }
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        if(a[0]==n){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
        a.clear();
        b.clear();
    }
    return 0;
}


/*
SAMPLE I/O

*/
