#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, x, i, pivot;
    vector<int> v, hop;
    cin >> t;
    while(t--){
        v.clear();
        hop.clear();
        cin >> n>> x;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
        }
        for(i=0; i<n; i++){
            if(x%v[i]==0){
                pivot = x/v[i];
                hop.pb(pivot);
            }
        }
        sort(v.begin(), v.end());
        if(v[n-1]>x){
            pivot = 2;
            hop.pb(pivot);
        }
        else if(v[n-1]==x){
            pivot = x/v[n-1];
            hop.pb(pivot);
        }
        else{
            if(v[n-1]==1){
                pivot = x/v[n-1];
                hop.pb(pivot);
            }
            else{
                pivot = x/v[n-1]+1;
                hop.pb(pivot);
            }
        }

        sort(hop.begin(), hop.end());
        cout << hop[0] << "\n";

    }
    return 0;
}


/*
SAMPLE I/O

*/
