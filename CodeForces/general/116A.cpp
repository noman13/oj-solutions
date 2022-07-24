#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, current=0, MAX=0;
    cin >> n;
    int out[n+10], in[n+10];
    for(i=0; i<n; i++){
        cin >> out[i] >> in[i];
        current += in[i] - out[i];
        if(current > MAX){
            MAX = current;
        }
    }
    cout << MAX << "\n";

    return 0;
}


/*
SAMPLE I/O


*/
