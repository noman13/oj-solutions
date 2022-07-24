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
    int t, n, a, b, i, j, pivot;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        int seg = n-a+1;
        string s;
        for(i=0; i<b; i++){
            s+=('a'+i);
        }
        //cout << s<< endl;
        int sz = n/b;
        for(i=0; i<sz; i++){
            cout << s;
        }
        sz = n%b;
        for(i=0; i<sz; i++){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}


/*
SAMPLE I/O

*/
