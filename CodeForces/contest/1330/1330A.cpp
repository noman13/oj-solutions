#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, x, i, j, pivot, flag = 0;
    vector<int> v;
    cin >> t;
    while(t--){
        cin >> n >> x;
        v.clear();
        int vis[101];
        memset(vis, 0, sizeof(vis));
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
            vis[pivot] = 1;
        }
        for(i=1; i<=100; i++){
            if(vis[i]==0){
                vis[i]=1;
                x--;
            }
            if(x==0){
                break;
            }
        }
        for(i=1; i<=100; i++){
            //cout << vis[i] << " ";
            if(vis[i]==0){
                //i--;
                break;
            }
        }
        cout << i+x-1<< "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
