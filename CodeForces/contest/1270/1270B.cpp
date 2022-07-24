#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, i, j, pivot, n, l, r, flag;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        flag = 0;
        cin >> n;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
        }
        for(i=0; i<n-1; i++){
            if(abs(v[i]-v[i+1])>=2){
                l=i+1;
                r=l+1;
                flag =1;
                break;
            }
        }
        if(flag==1){
            cout << "YES\n" << l << " " << r << "\n";
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

