#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"

#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    optimize();
    ll t, n, i, j, pivot;
    vector<int> v, ans;
    cin >> t;
    while(t--){
        cin >> n;
        v.clear();
        ans.clear();
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
        }
        sort(v.begin(), v.end());
        if(n%2==0){
            for(i=n/2-1, j=(n/2); i>=0, j<n; i--, j++){
                ans.pb(v[i]);
                ans.pb(v[j]);
            }
        }
        else{
            ans.pb(v[n/2]);
            for(i=n/2-1, j=(n/2)+1; i>=0, j<n; i--, j++){
                ans.pb(v[i]);
                ans.pb(v[j]);
            }
        }
        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}


/*
SAMPLE I/O

*/
