#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int i;
    string s;
    cin >> s;
    if('a' <= s[0] && s[0] <= 'z'){
        s[0] -= ('a' - 'A');
        cout << s <<"\n";
    }
    else{
        cout << s <<"\n";
    }
    return 0;
}


/*
inputCopy
ApPLe
outputCopy
ApPLe

inputCopy
konjac
outputCopy
Konjac

*/

