#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, a, i, j, pivot, ans, left, right;
    vector<int> v;
    cin >> n >> a;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    ans=v[a-1];
    for(i=a-1, j=a-1;;){
        if(i<0 & j>=n){
            break;
        }
        i--;
        j++;
        if(i>=0 && j<=n-1){
            if(v[i]==v[j]){
                ans+=2*v[i];
            }
        }
        else if(i<0 && j<=n-1){
            ans+=v[j];
        }
        else if(i>=0 && j>=n){
            ans+=v[i];
        }
    }
    cout << ans << "\n";
    return 0;
}


/*
SAMPLE I/O

*/
