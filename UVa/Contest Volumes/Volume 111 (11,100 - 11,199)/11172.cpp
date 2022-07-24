#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    int a, b;
    int i;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> a >> b;
        if(a>b){
            cout << ">" << endl;
        }
        else if(b>a){
            cout << "<" << endl;
        }
        else{
            cout << "=" << endl;
        }
    }
    return 0;
}

/*
Sample Input
3
10 20
20 10
10 10
Sample Output
<
>
=
*/

