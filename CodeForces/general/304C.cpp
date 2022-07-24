#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, j, flag=0;
    cin >> n;
    vector<int> a, b, c, d;
    for(i=0; i<n; i++){
        a.pb(i);
        b.pb((i+1)%n);
        c.pb((2*i+1)%n);
    }
    d = c;
    sort(d.begin(), d.end());
    for(i=0; i<n-1; i++){
        if(d[i]==d[i+1]){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout << -1;
    }
    else{
        for(auto i : a){
            cout << i << " ";
        }
        cout << "\n";
        for(auto i : b){
            cout << i << " ";
        }
        cout << "\n";
        for(auto i : c){
            cout << i << " ";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
