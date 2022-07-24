#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, a, b, i, j, sum;
    while(cin >> t){
        for(i=0; i<t; i++){
            cin >> a >> b;
            sum = 0;
            if(a%2 == 0){
                a++;
            }
            else if(b%2 == 0){
                b--;
            }
            for(j = a; j<=b; j+=2){
                sum += j;
            }
            cout << "Case " << i+1 << ": " << sum << "\n";
        }
    }
    return 0;
}


/*
Sample Input
2
1
5
3
5
Sample Output
Case 1: 9
Case 2: 8

*/




