#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, pivot, i, dif, min_dif, flag;
    vector<int> a;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        a.push_back(pivot);
    }
    min_dif = abs(a[0]-a[1]);
    for(i=0; i<n-1; i++){
        dif = abs(a[i] - a[i+1]);
        if(dif<=min_dif){
            min_dif = dif;
            flag = i+1;
        }
    }
    dif = abs(a[0] - a[n-1]);
    if(dif<=min_dif){
        flag = n;
    }
    if(flag==n){
        cout << flag  << " " << 1 << "\n";
    }
    else{
        cout << flag << " " << flag+1 << "\n";     }
    return 0;
}


/*
SAMPLE I/O


*/
