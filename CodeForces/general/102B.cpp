#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    ll ans=0, i, j, pivot, sz;
    sz=s.size();
    while(sz>1){
        //cout << s << "\n";
        sz=s.size();
        pivot=0;
        for(i=0; i<sz; i++){
            pivot+=s[i]-48;
        }
        s.clear();
        s = to_string(pivot);
        sz=s.size();
        ans++;
    }
    cout << ans << "\n";
    return 0;
}


/*
SAMPLE I/O

*/
