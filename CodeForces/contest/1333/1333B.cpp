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
    vector<int> a, b;
    cin >> t;
    while(t--){
        a.clear();
        b.clear();
        bool flag = true;
        map<ll, ll> mp;
        mp.clear();
        cin >> n;
        for(i=0; i<n; i++){
            cin >> pivot;
            a.pb(pivot);
        }
        for(i=0; i<n; i++){
            cin >> pivot;
            b.pb(pivot);
        }
        for(i=0; i<n; i++){
            if(b[i]>a[i]){
                if(mp[1]!=1){
                    flag = false;
                    break;
                }
            }
            if(b[i]<a[i]){
                if(mp[-1]!=1){
                    flag = false;
                    break;
                }
            }
            mp[a[i]]=1;
        }
        if(flag){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
