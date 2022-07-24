#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, h;
    int i, pivot, one=0, two=0;
    vector<int> v;
    cin >> n >> h;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    for(i=0; i<n; i++){
        if(v[i]<=h){
            one++;
        }
        else{
            two++;
        }
    }
    cout << one+2*two << "\n";
    return 0;
}


/*
SAMPLE I/O


*/

