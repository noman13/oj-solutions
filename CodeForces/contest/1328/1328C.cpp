#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, j, pivot, flag;
    string s;
    vector<int> a, b;
    cin >> t;
    while(t--){
        s.clear();
        a.clear();
        b.clear();
        cin >> n >> s;
        a.pb(1);
        b.pb(1);
        flag=0;
        for(i=1; i<n; i++){
            if(s[i]=='1' && flag==0){
                a.pb(1);
                b.pb(0);
                flag=1;
                continue;
            }
            if(s[i]=='1'){
                a.pb(0);
                b.pb(1);
            }
            else if(s[i]=='2'){
                if(flag==0){
                    a.pb(1);
                    b.pb(1);
                }
                else{
                    a.pb(0);
                    b.pb(2);
                }
            }
            else if(s[i]=='0'){
                a.pb(0);
                b.pb(0);
            }
        }
        for(auto i : a){
            cout <<  i;
        }
        cout << "\n";
        for(auto i : b){
            cout <<  i;
        }
        cout << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
