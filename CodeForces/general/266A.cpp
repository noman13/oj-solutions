#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, c=0;
    string s;
    cin >> n >> s;
    for(i=0; i<n-1;){
        if(s[i] == s[i+1]){
            c++;
            i++;
        }
        else{
            i++;
        }
    }
    cout << c << "\n";
    return 0;
}


/*
SAMPLE I/O

input
3
RRG
output
1

input
5
RRRRR
output
4

input
4
BRBG
output
0
*/

