#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, l=0, r=0;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='L'){
            l++;
        }
        else{
            r++;
        }
    }
    cout << l+r+1 << "\n";

    return 0;
}


/*
SAMPLE I/O


*/
