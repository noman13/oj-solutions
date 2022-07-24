#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t, n, digit, i;
    vector<int> v;
    cin >> t;
    while(t--){
        cin >> n;
        while(n>3){
            v.push_back(1);
            n-=2;
        }
        if(n==2){
            v.push_back(1);
        }
        else if(n==3){
            v.push_back(7);
        }
        reverse(v.begin(), v.end());
        for(i=0; i<v.size(); i++){
            cout<< v[i];
        }
        cout << "\n";
        while(!v.empty()){
            v.pop_back();
        }
    }
    return 0;
}


/*
SAMPLE I/O


*/
