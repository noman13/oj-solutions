#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    int i, num;
    vector <int> v;
    cin >> s;
    for(i=0; i<s.length(); i++){
        if(s[i]!='+'){
            v.push_back(s[i]-48);
        }
    }
    sort(v.begin(), v.end());
    for(i=0; i<v.size()-1; i++){
        cout << v[i] << "+";
    }
    cout << v[v.size()-1] << "\n";

    return 0;
}


/*
SAMPLE I/O


*/

