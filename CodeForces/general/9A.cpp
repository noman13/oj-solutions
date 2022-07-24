#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int y, w, d;
    cin >> y >> w;
    d=7-max(y, w);
    if(d==1 || d==5){
        cout << d << "/6" << "\n";
    }
    else if(d==2 || d==4){
        cout << d/2 << "/3" << "\n";
    }
    else if(d==3){
        cout << d/3 << "/2" << "\n";
    }
    else{
        cout << d/6 << "/1" << "\n";
    }
    return 0;
}


/*
SAMPLE I/O


*/
