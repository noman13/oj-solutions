#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, pivot, S=0, D=0, right, left;
    vector<int> v, ans;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> pivot;
        v.push_back(pivot);
    }
    left=0;
    right=n-1;
    for(i=0; i<n; i++){
        if(v[left]>v[right]){
            ans.push_back(v[left]);
            left++;
        }
        else{
            ans.push_back(v[right]);
            right--;
        }
    }
    for(i=0; i<n; i++){
        if(i%2==0){
            S+=ans[i];
        }
        else{
            D+=ans[i];
        }
    }
    cout << S << " " << D << "\n";
    return 0;
}


/*
SAMPLE I/O
input
42
15 29 37 22 16 5 26 31 6 32 19 3 45 36 33 14 25 20 48 7 42 11 24 28 9 18 8 21 47 17 38 40 44 4 35 1 43 39 41 27 12 13

*/
