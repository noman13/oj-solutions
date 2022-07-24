#include <bits/stdc++.h>
using namespace std;
int prime[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m , i, flag;
    cin >> n >> m;
    for(i=0; i<16; i++){
        if(n==prime[i] && m==prime[i+1]){
            cout << "YES" << "\n";
            flag = 1;
            break;
        }
        else{
            flag = 0;
        }
    }
    if(flag==0){
        cout << "NO" << "\n" ;
    }
    return 0;
}


/*
SAMPLE I/O

inputCopy
3 5
outputCopy
YES
inputCopy
7 11
outputCopy
YES
inputCopy
7 9
outputCopy
NO

*/
