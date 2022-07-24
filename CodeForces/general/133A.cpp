#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    int flag = 0, i;
    cin >> s;
    for(i=0; i<s.size(); i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    return 0;
}


/*
SAMPLE I/O


*/
