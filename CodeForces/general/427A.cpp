#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, cnt=0, pivot, police=0;
    vector<int> v;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.push_back(pivot);
    }
    for(i=0; i<n; i++){
        if(v[i]>0){
            pivot=i;
            break;
        }
        cnt++;
    }
    if(cnt==n){
        cout << n << "\n";
        return 0;
    }
    for(i=pivot; i<n; i++){
        if(v[i]>0){
            police+=v[i];
        }
        if(v[i]==-1){
            police--;
            if(police<0){
                police=0;
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}


/*
SAMPLE I/O


*/
