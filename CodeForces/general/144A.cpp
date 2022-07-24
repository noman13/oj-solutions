#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, x, MIN, MAX, result;
    vector <int> v, t;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }
    t = v;
    sort(v.begin(), v.end());
    for(i=0; i<n; i++){
        if(t[i]==v[0]){
            MIN = i;
        }
    }
    for(i=0; i<n; i++){
        if(t[i]==v[n-1]){
            MAX = i;
            break;
        }
    }
    result = MAX + (n-1-MIN);
    if(t[0]==v[n-1] && t[n-1]==v[0]){
        cout << 0 << "\n";
        return 0;
    }
    else if(MAX>MIN){
        cout << result -1  << "\n";
    }
    else{
        cout << result << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

inputCopy
4
33 44 11 22
outputCopy
2

inputCopy
7
10 10 58 31 63 40 76
outputCopy
10

*/
