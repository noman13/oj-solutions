#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, a[4], n, i, pivot;
    cin >> t;
    while(t--){
        for(i=0; i<3; i++){
            cin >> a[i];
        }
        cin >> n;
        sort(a, a+3);

        if(a[0]==a[1] && a[1]==a[2]){
            if(n%3==0){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else if(a[0]==a[1] && a[1]!=a[2]){
            pivot = n - 2*(a[2]-a[1]);
            if(pivot>=0 && pivot%3==0){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else if(a[0]!=a[1] && a[1]==a[2]){
            pivot = n - (a[1]-a[0]);
            if(pivot>=0 && pivot%3==0){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else if(a[0]!=a[1] && a[1]!=a[2]){
            pivot = n - (a[2]-a[1]) -(a[2]-a[0]);
            if(pivot>=0 && pivot%3==0){
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
