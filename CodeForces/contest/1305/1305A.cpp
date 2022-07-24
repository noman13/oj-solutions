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
    vector<int> a, b, sum;
    cin >> t;
    while(t--){
        a.clear();
        b.clear();
        sum.clear();
        cin >> n;
        for(i=0; i<n; i++){
            cin >> pivot;
            a.pb(pivot);
        }
        for(i=0; i<n; i++){
            cin >> pivot;
            b.pb(pivot);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(i=0; i<n; i++){
            pivot = a[i]+b[i];
            sum.pb(pivot);
        }
        sort(sum.begin(), sum.end());
        for(i=1; i<n; i++){
            pivot = sum[0];
            if(sum[i]==pivot){
                pivot = sum[i];
                swap(a[i], a[i-1]);
            }
        }
        for(i=0; i<n; i++){
            cout<<a[i] << " ";
        }
        cout << "\n";
        for(i=0; i<n; i++){
            cout<<b[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
