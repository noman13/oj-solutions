#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, pivot, sum, odd, even, v_size;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        sum = 0;
        odd = 0;
        even = 0;
        cin >> n;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
            sum+=pivot;
        }
        if(sum%2!=0){
            cout << "YES" << "\n";
        }
        else{
            v_size = v.size();
            for(i=0; i<v_size; i++){
                if(v[i]%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
            if((odd>0 && even==0) || (even>0 && odd==0)){
                cout << "NO" << "\n";
            }
            else{
                cout << "YES" << "\n";
            }
        }

    }
    return 0;
}


/*
SAMPLE I/O


*/
