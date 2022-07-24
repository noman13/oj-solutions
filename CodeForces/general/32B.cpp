#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int i, j, k;
    string s;
    cin >> s;
    for(i=0; i<s.length();){
        if(s[i]=='-' && s[i+1]=='.'){
            cout << 1;
            i+=2;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            cout << 2;
            i+=2;
        }
        else if(s[i]=='.'){
            cout << 0;
            i++;
        }
    }
    cout << "\n";
    return 0;
}
