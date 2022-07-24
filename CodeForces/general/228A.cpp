#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int s, i;
    set <int> st;
    for(i=0; i<4; i++){
        cin >>s;
        st.insert(s);
    }
    cout << 4-st.size() << "\n";
    return 0;
}


/*
SAMPLE I/O


*/

