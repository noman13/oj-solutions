#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s, t, r;
    int i;
    cin >> s >> t;
    for(i=0; i<s.size(); i++){
        if(s[i]==t[i]){
            cout << 0;
        }
        else{
            cout << 1;
        }
    }
    cout << "\n";
    return 0;
}


/*
SAMPLE I/O

inputCopy
1010100
0100101
outputCopy
1110001

inputCopy
000
111
outputCopy
111

inputCopy
1110
1010
outputCopy
0100

inputCopy
01110
01100
outputCopy
00010

*/
