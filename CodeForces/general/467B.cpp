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
    int n, m, k;
    int i, j, pivot, ans=0;
    vector<int> v;
    cin >> n >> m >> k;
    for(i=0; i<m+1; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    for(i=m-1; i>=0; i--){
        pivot = v[i];
        pivot^=v[m];
        int cnt = 0;
        while(pivot){
            pivot&=(pivot-1);
            cnt++;
        }
        if(cnt<=k){
            ans++;
        }
    }
    cout << ans;
    return 0;
}


/*
SAMPLE I/O

*/
