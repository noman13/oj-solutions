#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, i, j, pivot, sz, l, r, zero;
    string s;
    vector<int> v;
    cin >> t;
    while(t--){
        s.clear();
        zero=0;
        cin >> s;
        sz = s.size();
        l=s.find('1');
        r=s.rfind('1');
        if(l<0){
            cout << 0 << "\n";
        }
        else{
            for(i=l;i<r;i++){
                if(s[i]=='0'){
                    zero++;
                }
            }
            cout << zero << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
