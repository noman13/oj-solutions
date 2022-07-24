#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, k, pivot, i, j, max_adj, index, mn,mx, half, flag;
    vector<int> v, v1;
    cin >> t;
    while(t--){
        v.clear();
        v1.clear();
        max_adj=0;

        cin >> n;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
        }

        flag = 0;
        for(i=0; i<n; i++){
            if(v[i]!=-1){
                flag = 1;
                if(i-1<0){
                    if(v[i+1]==-1){
                        v1.pb(v[i]);
                    }
                }
                else if(i+1>=n){
                    if(v[i-1]==-1){
                        v1.pb(v[i]);
                    }
                }
                else{
                    if(v[i-1]==-1 || v[i+1]==-1){
                        v1.pb(v[i]);
                    }
                }
            }
        }
        sort(v1.begin(), v1.end());


        if(flag==1){
            mn=0;
            mx=v1.size()-1;
            half=(v1[mn]+v1[mx])/2;
        }
        else if(flag==0){
            mn=0;
            mx=n-1;
            half=(v[mn]+v[mx])/2;
        }

        for(i=0; i<n; i++){
            if(v[i]==-1){
                v[i]=half;
            }
        }
        for(i=1; i<n; i++){
            if(max_adj<abs(v[i-1]-v[i])){
                max_adj=abs(v[i-1]-v[i]);
            }
        }

        cout << max_adj << " " << abs(half) << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
