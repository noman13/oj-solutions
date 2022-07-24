#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int i, j, k;
    int low = 0, high= 0;
    string s;
    cin >> s;
    for(i=0; i<s.length(); i++){
        if('A' <= s[i] && s[i] <= 'Z'){
            high++;
        }
        else if('a' <= s[i] && s[i] <= 'z'){
            low++;
        }
    }
    for(i=0; i<s.length(); i++){
        if(high <= low){
            if('A' <= s[i] && s[i] <= 'Z'){
                s[i] += ('a' - 'A');
            }
        }
        else{
            if('a' <= s[i] && s[i] <= 'z'){
                s[i] -= ('a' - 'A');
            }
        }
    }
    cout << s << "\n";
    return 0;
}


/*
inputCopy
HoUse
outputCopy
house

inputCopy
ViP
outputCopy
VIP

inputCopy
maTRIx
outputCopy
matrix

*/

