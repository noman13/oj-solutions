#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, j, pivot, sz, med1, med2;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        cin >> n;
        sz = 2*n;
        for(i=0; i<sz; i++){
            cin >> pivot;
            v.push_back(pivot);
        }
        sort(v.begin(), v.end());
        med1=n-1;
        med2=n;
        cout << abs(v[med1]-v[med2]) << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
