#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a, b, n;
    int flag = 0, i, j;
    cin >> a >> b >> n;
    a*=10;
    for(i=0; i<10; i++){
        if((a+i)%b == 0){
            a+=i;
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << a;
        for(j=0; j<n-1; j++){
            cout << "0";
        }
        cout << "\n";
    }
    else{
        cout << "-1" << "\n";
    }
    return 0;
}


/*
SAMPLE I/O
input
5 4 5
output
524848

input
12 11 1
output
121

input
260 150 10
output
-1

*/

