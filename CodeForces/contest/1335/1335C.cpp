#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    optimize();
    int t, n, i, j, pivot;
    set<int> st;
    map<int, int> mpp;
    cin >> t;
    while(t--){
        cin >> n;
        st.clear();
        mpp.clear();
        for(i=0; i<n; i++){
            cin >> pivot;
            st.insert(pivot);
            mpp[pivot]++;
        }
        int un, same=0, mx=0;
        un = st.size();
        for(i=1; i<=n; i++){

                pivot = mpp[i];
                if(pivot>mx){
                    mx = pivot;
                }
        }
        //cout << un << " " << mx << " ";
        if(un==mx) cout << un-1 << endl;
        else cout << min(un, mx) << endl;

    }
    return 0;
}


/*
SAMPLE I/O

*/
