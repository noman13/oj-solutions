#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, d, i, pivot, sum, flag;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        flag = 0;
        sum = 0;
        cin >> n >> d;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
        }
        sum+=v[0];
        for(i=1; i<n; i++){
            while(v[i]>0){
                v[i]--;
                d-=i;
                if(d<0){
                    break;
                }
                sum++;
            }
        }
        cout << sum << "\n";

    }
    return 0;
}


/*
SAMPLE I/O

*/
