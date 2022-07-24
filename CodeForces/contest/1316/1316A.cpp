#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    double t, n, m, pivot, i, j, sum;
    double avg, temp;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        sum=0;
        temp=0;
        cin >> n >> m;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
            sum+=pivot;
        }
        for(i=0; i<n; i++){
            temp+=v[i];
            if(temp>=m){
                break;
            }
        }
        cout << min(m, temp) << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
