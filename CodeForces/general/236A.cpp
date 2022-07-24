#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    set <char> st;
    int i;
    cin >> s;
    for(i=0; i<s.size(); i++){
        st.insert(s[i]);
    }
    if(st.size()%2 == 0){
        cout << "CHAT WITH HER!" << "\n";
    }
    else{
        cout << "IGNORE HIM!" << "\n";
    }
}
