#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, f, i, sum=0, result = 0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> f;
        sum+=f;
    }
    //cout << sum;
    for(i=0; i<5; i++){
        sum++;
        //cout << sum;
        if(sum%(n+1)!=1){
            result++;
        }
    }
    cout << result << "\n";
    return 0;
}


/*
SAMPLE I/O


*/

