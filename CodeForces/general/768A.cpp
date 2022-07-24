#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, x, y;
    vector<int> v;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    x = v[0];
    y = v[n-1];
    for(i=0; i<n; i++){
        if(v[i]==x || v[i]==y) cnt++;
    }
    cout << n-cnt;
}