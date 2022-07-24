#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, a, i, sum, result=0;
    cin >> n;
    while(n--){
        sum=0;
        for(i=0; i<3; i++){
            cin >> a;
            sum+=a;
        }
        if(sum>1){
            result++;
        }
    }
    cout << result << "\n";
    return 0;
}


/*
SAMPLE I/O


*/

