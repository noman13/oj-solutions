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
    int n, pivot, i, j, zero=0, five=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        if(pivot==0) zero++;
        if(pivot==5) five++;
    }
    if(five/9==0 && zero>0){
        cout << 0 << endl;
        return 0;
    }
    if(zero<1){
        cout << -1 << endl;
        return 0;
    }
    else{
        int sz = 9*(five/9);
        for(i=1; i<=sz; i++){
            cout << 5;
        }
        for(i=1; i<=zero; i++){
            cout << 0;
        }
        cout << endl;
    }


    return 0;
}


/*
SAMPLE I/O

*/
