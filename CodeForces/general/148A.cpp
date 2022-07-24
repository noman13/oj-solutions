#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k, l , m , n , d, cnt;
    int i;
    cin >> k >> l >> m >> n >> d;
    cnt = d;
    int limit = 100000+7;
    int arr[limit];
    for(i=0; i<limit; i++){
        arr[i] = 0;
    }
    for(i=k; i<limit; i+=k){
        arr[i] = 1;
    }
    for(i=l; i<limit; i+=l){
        arr[i] = 1;
    }
    for(i=m; i<limit; i+=m){
        arr[i] = 1;
    }
    for(i=n; i<limit; i+=n){
        arr[i] = 1;
    }
    for(i=1; i<=d; i++){
        if(arr[i]==0){
            cnt--;
        }
    }
    cout << cnt << "\n";

    return 0;
}


/*
SAMPLE I/O


*/

