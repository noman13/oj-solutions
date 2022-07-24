#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, ans=0;
    cin >> n;
    string s, pivot;
    for(i=0; i<n; i++){
        cin >> pivot;
        s+=pivot;
    }
    //cout << s;
    for(i=1; i<n*2-1; i++){
        if(s[i]==s[i+1]){
            ans++;
        }
    }
    cout << ans+1 << "\n";
    return 0;
}


/*
SAMPLE I/O


*/
