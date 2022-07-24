#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, pivot, i, j, flag;
    vector<int> v;
    cin >> t;
    while(t--){
        cin >> n;
        v.clear();
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
        }
        sort(v.begin(), v.end());
        pivot = v[0];
        for(i=0; i<n; i++){
            v[i]= (v[i]-pivot)%2;
        }
        flag = 0;
        for(i=0; i<n; i++){
            if(v[i]==1){
                flag = 1;

            }
            //cout << v[i] << " ";
        }
        //cout << "\n";
        if(flag==0){
            cout << "YES" << "\n";
        }
        else if(flag==1){
            cout << "NO" << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
