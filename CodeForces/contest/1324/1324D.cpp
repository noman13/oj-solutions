#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, i, j, pivot, l, r, temp;
    ll cnt=0;
    ll a[201000];
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    for(i=0; i<n; i++){
        cin >> pivot;
        a[i]-=pivot;
    }
    sort(a, a+n);
    l=0;
    r=n-1;
    for(l=0; l<n; l++){
        pivot=a[l];
        temp=a[r];
        while(pivot+temp>0){
            r--;
            temp=a[r];
        }
        cnt+= n-max(l+1, r+1);
    }
    cout << cnt << "\n";
    return 0;
}


/*
SAMPLE I/O

*/
