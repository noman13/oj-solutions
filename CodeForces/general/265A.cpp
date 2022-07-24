#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s1, s2;
    int i, j, ans=1;
    cin >> s1 >> s2;
    for(i=0, j=0; i<s2.size(); i++){
        if(s2[i]==s1[j]){
            ans++;
            j++;
        }
    }
    cout<< ans << "\n";
    return 0;
}


/*
SAMPLE I/O


*/
