#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, q, pivot, i, low, up;
    vector<int> N, Q;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        N.pb(pivot);
    }
    cin >> q;
    for(i=0; i<n; i++){
        cin >> pivot;
        Q.pb(pivot);
    }
    for(i=0; i<q; i++){
        pivot = Q[i];
        low = lower_bound(N.begin(), N.end(), pivot)-N.begin()-1;
        up = upper_bound(N.begin(), N.end(), pivot)-N.begin();
        if(low<0){
            cout << "X ";
        }
        else{
            cout << N[low] << " ";
        }
        if(up>n-1){
            cout << "X\n";
        }
        else{
            cout << N[up] << "\n";
        }

    }
    return 0;
}


/*
SAMPLE I/O

Sample Input
4
1 4 5 7
4
4 6 8 10
Sample Output
1 5
5 7
7 X
7 X
*/
