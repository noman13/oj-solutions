#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, pivot;
    vector<int> v;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.push_back(pivot);
    }
    sort(v.begin(), v.end());
    for(i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}


/*
SAMPLE I/O


*/
