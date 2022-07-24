#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, pivot, sum, product, zero;
    vector<int> v;
    cin >> t;
    while(t--){
        cin >> n;
        sum=0;
        product=1;
        zero=0;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.push_back(pivot);
            sum+=pivot;
            product*=pivot;
            if(pivot==0){
                zero++;
            }
        }
        if(sum!=0 && product!=0){
            cout << 0 << "\n";
            //continue;
        }
        else{
            if(sum+zero==0){
                cout << zero+1 << "\n";
            }
            else{
                cout << zero << "\n";
            }

        }

    }
    return 0;
}


/*
SAMPLE I/O

*/
