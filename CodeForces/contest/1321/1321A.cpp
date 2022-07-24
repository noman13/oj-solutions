#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, pivot, i, j, ans, r_one=0, b_one=0, com=0;
    vector<int> r, b;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        r.pb(pivot);
        if(pivot==1){
            r_one++;
        }
    }
    for(i=0; i<n; i++){
        cin >> pivot;
        b.pb(pivot);
        if(pivot==1){
            b_one++;
        }
    }
    for(i=0; i<n; i++){
        if(r[i]==1 && b[i]==1){
            com++;
        }
    }
    r_one-=com;
    b_one-=com;
    if(r_one==b_one){
        if(r_one==0 && b_one==0){
            ans = -1;
        }
        else{
            ans = 2;
        }
    }
    else if(r_one<b_one){
        if(r_one!=0){
            ans = floor(b_one/r_one)+1;
        }
        else{
            ans = -1;
        }
    }
    else{
        ans = 1;
    }
    cout << ans << "\n";

    return 0;
}


/*
SAMPLE I/O

*/
