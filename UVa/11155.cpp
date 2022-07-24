#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, a, b, c, m, n, i, j, k, pivot, x;
    vector<int> v;
    cin >> t;
    for(k=1; k<=t; k++){
        cin >> a >> b >> c >> m >> n;
        v.clear();

        x = a;
        v.pb(x);
        for(i=1; i<n; i++){
            x = v[i-1];
            pivot = ((x*b+c)%m)+1;
            v.pb(pivot);
        }

        int cnt=0;
        int mod[m+1] = {0};

        int sum = v[0];
        mod[0]++;
        mod[sum%m]++;
        for(i=1; i<n; i++){
            sum += v[i];
            mod[sum%m]++;
        }
        for(i=0; i<m; i++){
            cnt+=(mod[i]*(mod[i]-1)/2);
        }

        cout << "Case " << k << ": " << cnt << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
