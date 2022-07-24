#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map<string, int> mp;
    string s;
    int i, lucky;
    cin >> s;
    for(i=0; i<s.size(); i++){
        if(s[i]=='4' || s[i]=='7'){
            mp[s]++;
        }
    }
    lucky = mp[s];
    if(lucky==4 || lucky==7){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }

}


/*
SAMPLE I/O


*/
