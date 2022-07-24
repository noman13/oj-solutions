#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, cnt, r;
    while(cin >> n){
        cnt = 0;
        if(n==0){
            break;
        }
        else{
            while(n>=3){
                r = n%3;
                n = n/3;
                cnt += n;
                n += r;
            }
        }
        if(n==2){
            cout << cnt+1<<endl;
        }
        else{
            cout << cnt<<endl;
        }
    }
    return 0;
}
