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
    int t, n, i, j;
    double x, pivot;
    vector<int> v;
    cin >> t;
    while(t--){
        cin >> n >> x;
        v.clear();
        double sum=0, avg;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
        }
        sort(v.begin(), v.end(), greater<int>());
        for(i=0; i<n; i++){
            sum+=v[i];
            avg = sum/(i+1);
            if(avg<x) break;
        }
        cout << i << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
