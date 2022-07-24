#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int w;
    while(cin >> w){
        if(w == 2){
            cout << "NO" << "\n";
        }
        else if(w % 2 != 0){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }
    }
    return 0;
}


/*
input
8
output
YES


Note
For example, the boys can divide the watermelon
into two parts of 2 and 6 kilos respectively
(another variant � two parts of 4 and 4 kilos).

*/
