#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s1, s2;
    int i, x;
    cin >> s1  >> s2;
    for(i=0; i<s1.size(); i++){
        s1[i] = tolower(s1[i]);
    }
    for(i=0; i<s2.size(); i++){
        s2[i] = tolower(s2[i]);
    }
    x = s1.compare(s2);
    if(x==0){
        cout << 0 << "\n";
    }
    else if(x<0){
        cout << -1 << "\n";
    }
    else{
        cout << 1 << "\n";
    }

    return 0;
}


/*
SAMPLE I/O


*/

