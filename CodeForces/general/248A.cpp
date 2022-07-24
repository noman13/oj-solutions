#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int lim = 10000+7;
    int n, l[lim], r[lim], i;
    int lz = 0, lo = 0, rz = 0, ro = 0, sum = 0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> l[i] >> r[i];
    }
    for(i=0; i<n; i++){
        if(l[i]==1){
            lo++;
        }
        if(l[i]==0){
            lz++;
        }
        if(r[i]==1){
            ro++;
        }
        if(r[i]==0){
            rz++;
        }
    }
    if(lz<=lo){
        sum+=lz;
    }
    else{
        sum+=lo;
    }
    if(rz<=ro){
        sum+=rz;
    }
    else{
        sum+=ro;
    }
    cout << sum << "\n";

    return 0;
}


/*
SAMPLE I/O


*/
