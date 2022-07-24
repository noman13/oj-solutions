#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n ,a[10], sum=0, i;
    cin >> n;
    for(i=0; i<7; i++){
        cin >> a[i];
    }
    i=0;
    while(sum<n){
        sum+=a[i%7];
        i++;
    }
    if(i%7==0){
        cout << 7 << "\n";
    }
    else{
        cout << i%7 << "\n";
    }
    return 0;
}


/*
SAMPLE I/O


*/
