#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , t;
    int i, j, k;
    string s;
    cin >> n >> t >>s;
    for(i=0; i<t; i++){
        for(j=0; j<n-1; j++){
            if(s[j]=='B' && s[j+1]=='G'){
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }
    cout << s << "\n";
    return 0;
}
