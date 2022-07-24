#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair

int bisection(ll, int);
bool isPossible(int);

int n, m;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, pivot;
    long long total, low;
    int i, j;
    cin >> t;
    for(i=0; i<t; i++){
        v.clear();
        cin >> n >> m;
        total=0;
        low=0;
        for(j=0; j<n; j++){
            cin >> pivot;
            v.push_back(pivot);
            total += pivot;
            if(pivot > low){
                low = pivot;
            }
        }
        cout << "Case " << i+1 << ": " << bisection(total, low) << "\n";
    }
    return 0;
}
int bisection(ll total, int maxCapacity)
{
    int low, mid, ans;
    ll high;

    low = maxCapacity;
    high = total;
    while(low<=high){
        mid = (low+high)/2;
        if(isPossible(mid)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

bool isPossible(int capacity)
{
    int pivot, cnt, i;

    pivot = 0;
    cnt = 1;

    for(i=0; i<n; i++){
        if(pivot+v[i] <= capacity){
            pivot += v[i];
        }
        else{
            pivot = v[i];
            cnt++;
        }
    }
    if(cnt>m){
        return false;
    }
    else{
        return true;
    }
}

/*
SAMPLE I/O

INPUT:
2
5 3
1 2 3 4 5
3 2
4 78 9

OUTPUT:
Case 1: 6
Case 2: 82


Input:
2
6 5
16 37 21 94 58 82
9 8
362030 522667 826235 49575 732626 910298 567963 132824 379329
Output:
Case 1: 94
Case 2: 910298

*/
