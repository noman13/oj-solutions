#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    double n, a[100+7], sum=0;
    int i;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    for(i=0; i<n; i++){
        sum+=(a[i]/100);
    }
    cout << sum/n*100 << "\n";

    return 0;
}


/*
SAMPLE I/O


*/

