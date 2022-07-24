#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k, r, ans=0, i;
    cin >> k >> r;
    for(i=1; i<10; i++){
        if((i*k)%10==0 || (i*k-r)%10==0){
            break;
        }
        ans++;
    }
    cout <<ans+1 << "\n";
    return 0;
}


/*
SAMPLE I/O


*/
