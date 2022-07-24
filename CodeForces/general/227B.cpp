#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, i, m, pivot;
    ll v=0, p=0, x, y;
    cin >> n;
    vector <ll> a, b;
    ll a_index[100000+7];
    for(i=0; i<n; i++){
        cin >> pivot;
        a.push_back(pivot);
    }
    cin >> m;
    for(i=0; i<m; i++){
        cin >> pivot;
        b.push_back(pivot);
    }
    //cout << "input done" << "\n";

    for(i=0; i<n; i++){
        pivot = a[i];
        //cout << "pivot : " << pivot;
        a_index[pivot]= i;
       //cout << " a-index[pivot] : " << a_index[pivot] << "\n";
    }

    for(i=0; i<m; i++){
        pivot = b[i];
        x = a_index[pivot] + 1;
        y = n - a_index[pivot];
        v+=x;
        p+=y;
    }
    cout << v << " " << p << "\n";

    return 0;
}


/*
SAMPLE I/O


*/

