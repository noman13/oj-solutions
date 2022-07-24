#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int mat[5][5];
    int res[5][5];
    int i, j, k, m, num;
    for(i=1; i<4; i++){
        for(j=1; j<4; j++){
            mat[i][j] = 0;
        }
    }
    for(i=1; i<4; i++){
        for(j=1; j<4; j++){
            cin >> num;
            mat[i][j] += num;
            mat[i][j-1] += num;
            mat[i][j+1] += num;
            mat[i-1][j] += num;
            mat[i+1][j] += num;
        }
    }
    for(i=1; i<4; i++){
        for(j=1; j<4; j++){
            mat[i][j] = abs((mat[i][j]%2) -1);
            cout << mat[i][j];
        }
        cout << "\n";
    }
    return 0;
}
/*
input
1 0 0
0 0 0
0 0 1
output
001
010
100

input
1 0 1
8 8 8
2 0 3
output
010
011
100
*/
