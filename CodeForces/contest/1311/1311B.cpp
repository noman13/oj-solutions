#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, m, pivot, i, j, sz_p, low, high;
    vector<int> a, a_copy, p, p_copy;
    //set<int> p_copy;
    //set<int> :: iterator it;
    cin >> t;
    while(t--){
        a.clear();
        a_copy.clear();
        p.clear();
        p_copy.clear();
        cin >> n >> m;
        for(i=0; i<n; i++){
            cin >> pivot;
            a.pb(pivot);
        }
        for(i=0; i<m; i++){
            cin >> pivot;
            p.pb(pivot);
        }
        a_copy = a;
        sort(a_copy.begin(), a_copy.end());
        if(a==a_copy){
            cout << "YES" << "\n";
        }
        else{
            for(i=0; i<n-1; i++){
                for(j=0; j<n-1; j++){
                    if(a[j]>a[j+1]){
                        vector<int>::iterator itt = find(p.begin(), p.end(), j+1);
                        if(itt!=p.end()){
                            pivot=a[j];
                            a[j]=a[j+1];
                            a[j+1]=pivot;
                        }
                    }
                }
            }
            if(a==a_copy){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
