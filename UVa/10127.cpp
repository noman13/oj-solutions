#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, cnt;
    while(cin >> n){
        int ret = 0;
        cnt = 0;
        for(int i = 0; ; i++){
            ret = (ret*10 + 1)%n;
            cnt++;
            if(ret==0){
                break;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
