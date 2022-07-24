#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        if(n%m==0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
