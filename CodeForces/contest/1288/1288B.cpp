#include <bits/stdc++.h>
using namespace std;
int digit_count(long long num)
{
    int x=0;
    while(num){
        num/=10;
        x++;
    }
    return x;
}
long long max_gen(long long x)
{
    int y = digit_count(x), i, a=9;
    for(i=1; i<y; i++){
        a= a*10 + 9;
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, i, j, cnt;
    cin >> t;
    long long a, b;
    while(t--){
        cnt = 0;
        cin >> a >> b;
        if(max_gen(b)==b){
            cout << a*digit_count(b) << "\n";
        }
        else{
            cout << a*(digit_count(b)-1) << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O


*/

