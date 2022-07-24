#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, MIN, MAX, cnt = 0;
    int a[1000+7];
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    MIN = a[0];
    MAX = a[0];
    for(i=1; i<n; i++){
        if(a[i]<MIN){
            cnt++;
            MIN = a[i];
        }
        else if(a[i]>MAX){
            cnt++;
            MAX = a[i];
        }
    }
    cout << cnt << "\n";
    return 0;
}


/*
SAMPLE I/O

inputCopy
5
100 50 200 150 200
outputCopy
2

inputCopy
10
4664 6496 5814 7010 5762 5736 6944 4850 3698 7242
outputCopy
4

*/
