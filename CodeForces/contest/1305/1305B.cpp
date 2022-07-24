#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int i, j, pivot, sz, op=0;
    string s;
    vector<int> v;
    cin >> s;
    sz = s.size();
    pivot=sz;
    for(i=0, j=sz-1; i<sz ; i++){
        if(s[i]=='('){
            while(true){
                if(j<=i){
                    break;
                }
                if(s[j]==')'){
                    v.pb(i+1);
                    v.pb(j+1);
                    j--;
                    break;
                }
                j--;
            }
        }
    }
    sort(v.begin(), v.end());
    sz = v.size();
    if(sz==0){
        cout << 0 << "\n";
    }
    else{
        cout << 1 << "\n" << v.size() << "\n";
        for(i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << "\n";

    }
    return 0;
}


/*
SAMPLE I/O

*/
