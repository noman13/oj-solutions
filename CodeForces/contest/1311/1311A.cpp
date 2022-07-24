#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, a, b, i, pivot;
    cin >> t;
    while(t--){
        cin >> a >> b;
        pivot = abs(a-b);
        if(pivot%2==0){
            if(a<b){
                cout << 2 << "\n";
            }
            else if(a==b){
                cout << 0 << "\n";
            }
            else{
                cout << 1 << "\n";
            }
        }
        if(pivot%2!=0){
            if(a<b){
                cout << 1 << "\n";
            }
            else{
                cout << 2 << "\n";
            }
        }

    }
    return 0;
}


/*
SAMPLE I/O

*/
