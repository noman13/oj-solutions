#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    int a[4];
    int i, j, n;
    cin >> t;
    for(i=0; i<t; i++){
        for(j=0; j<3; j++){
            cin >> a[j];
        }
        n = sizeof(a)/sizeof(a[0]);
        sort(a, a+3);
        cout << "Case " << i+1 << ": " << a[1] << endl;
    }
    return 0;
}
