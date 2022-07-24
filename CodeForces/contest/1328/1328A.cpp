#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a%b==0){
            cout << 0 << "\n";
        }
        else{
            cout << ((a/b)+1)*b-a << "\n";

        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
