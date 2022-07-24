#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long double n, sum=0, i;
    cin >> n;
    for(i=n; i>0; i--){
        sum+=(1/i);
    }
    cout << sum << "\n";
    return 0;
}


/*
SAMPLE I/O


*/

