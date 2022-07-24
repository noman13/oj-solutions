#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, x, y, a, b;
    int distance, x_pos, y_pos, ans;
    cin >> t;
    while(t--){
        cin >> x >> y >> a >> b;
        distance = y-x;
        ans = distance/(a+b);
        //cout << ans << "\n";
        if(x+ans*a==y-ans*b){
            cout << ans << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
