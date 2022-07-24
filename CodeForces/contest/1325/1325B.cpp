#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, pivot;
    set<int> st;
    set<int> :: iterator it;
    cin >> t;
    while(t--){
        cin >> n;
        st.clear();
        for(i=0; i<n; i++){
            cin >> pivot;
            st.insert(pivot);
        }
        cout << st.size()<< "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
