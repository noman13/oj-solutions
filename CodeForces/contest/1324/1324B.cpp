#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, j, pivot, temp, flag;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        cin >> n;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
        }
        flag = 0;
        for(i=0; i<n; i++){
            temp = v[i];
            j=n-1;
            while(v[j]!=temp){
                j--;
                if(j<0){
                    break;
                }
            }
            if(j-i>=2){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout << "NO" << "\n";
        }
        else if(flag==1){
            cout << "YES\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
