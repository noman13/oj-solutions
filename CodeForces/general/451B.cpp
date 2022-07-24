#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(a) a.begin(),a.end()
#define printAll(a) for(auto const & i : a){ cout << i << " ";}cout << endl
#define endl "\n"
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    optimize();
    int n, i, j, pivot;
    cin >> n;
    vector<int> v, vc;
    bool f = true;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.pb(pivot);
    }
    vc = v;
    sort(all(vc));
    if(v==vc){
        cout << "yes" << endl << 1 << " " << 1 << endl;
        return 0;
    }
    int l, r;
    for(i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            l = i;
            break;
        }
    }
    for(i=l; i<n-1; i++){
        if(v[i]<v[i+1]){
            f = false;
            r = i;
            break;
        }
    }
    if(f) r = i;
    //cout << l << " " << r<< endl;
    //printAll(v);
    reverse(v.begin()+l, v.begin()+r+1);
    //printAll(v);
    if(v!=vc) cout << "no" << endl;
    else{
        cout << "yes" << endl << l+1 << " " << r+1 << endl;
    }
    return 0;
}


/*
SAMPLE I/O

*/
