#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, a, b, c, aa[4], ans;
    cin >> t;
    while(t--){
        ans = 0;
        cin >> aa[0] >> aa[1] >> aa[2];
        sort(aa, aa+3);
        a=aa[2];
        b=aa[1];
        c=aa[0];
        a--;
        if(a>=0){
            ans++;
        }
        b--;
        if(b>=0){
            ans++;
        }
        c--;
        if(c>=0){
            ans++;
        }
        a--; b--;
        if(a>=0 && b>=0){
            ans++;
        }
        a--; c--;
        if(a>=0 && c>=0){
            ans++;
        }
        b--; c--;
        if(b>=0 && c>=0){
            ans++;
        }
        a--; b--; c--;
        if(a>=0 && b>=0 && c>=0){
            ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
