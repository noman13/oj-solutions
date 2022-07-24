#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, j, pivot, ans, mx=1, mn=INT_MAX, flag, left, right;
    vector<int> v;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    for(i=0; i<n; i++){
        ans=1;
        left = i-1;
        right = i+1;
        flag = 0;
        while(left>=0){
            if(v[i]==v[left] && flag==0){
                ans++;
            }
            else if(v[left+1]>=v[left]){
                ans++;
                flag=1;
            }
            else{
                break;
            }
            left--;
        }
        flag=0;
        while(right<=n-1){
            if(v[i]==v[right] && flag==0){
                ans++;
            }
            else if(v[right-1]>=v[right]){
                ans++;
                flag=1;
            }
            else{
                break;
            }
            right++;
        }
        if(ans>mx){
            mx = ans;
        }
       // cout << ans << " ";
    }
    //cout << "\n";
    cout << mx << "\n";
    return 0;
}


/*
SAMPLE I/O

*/

