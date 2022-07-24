#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    int a[101][10];
    int i, j, k;
    int sum_x, sum_y, sum_z;
    while(cin >> n){
        sum_x = 0, sum_y = 0, sum_z = 0;
        for(i=0; i<n; i++){
            for(j=0; j<3; j++){
                cin >> a[i][j];
            }
        }
        for(k=0; k<n; k++){
            sum_x += a[k][0];

        }
        for(k=0; k<n; k++){
            sum_y += a[k][1];
        }
        for(k=0; k<n; k++){
            sum_z += a[k][2];
        }
        if(sum_x == 0 && sum_y == 0 && sum_z == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }
    return 0;

}

/*
inputCopy
3
4 1 7
-2 4 -1
1 -5 -3
outputCopy
NO

inputCopy
3
3 -1 7
-5 2 -4
2 -1 -3
outputCopy
YES
*/
