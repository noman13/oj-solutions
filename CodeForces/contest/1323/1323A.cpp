#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, j, pivot, ans=-1, flag;
    vector<int> v, a;
    cin >> t;
    while(t--){
        v.clear();
        cin >> n;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
            if(pivot%2==0){
                ans = i+1;
            }
        }
        flag = 0;
        for(i=0; i<n; i++){
            pivot = v[i];
            if(pivot%2==0){
                ans = i+1;
                flag = 1;
                break;
            }
        }
        if(flag==1){
            cout << 1 << "\n"<< ans << "\n";
        }
        else if(flag==0){
            if(n>1){
                cout << 2 << "\n" << 1 << " " << 2 << "\n";
            }
            else{
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
