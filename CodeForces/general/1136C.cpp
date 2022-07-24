#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

#define yes cout << "yes\n"
#define no cout << "no\n"
#define NO cout << "NO\n"
#define YES cout << "YES\n"

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m, i, j, k, pivot, flag=1;
    cin >> n >> m;
    int matA[1007][1007];
    int matB[1007][1007];
    vector<int> diagA, diagB;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> matA[i][j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> matB[i][j];
        }
    }
    for(k=0; k<n; k++){
        diagA.clear();
        diagB.clear();
        i=k;
        j=0;
        while(i>=0){
            pivot = matA[i][j];
            diagA.pb(pivot);
            pivot = matB[i][j];
            diagB.pb(pivot);
            i--;
            j++;
        }
        sort(diagA.begin(), diagA.end());
        sort(diagB.begin(), diagB.end());
        if(diagA!=diagB){
            flag = 0;
            break;
        }
    }
    for(k=1; k<m; k++){
        diagA.clear();
        diagB.clear();
        i=n-1;
        j=k;
        while(j<m){
            pivot = matA[i][j];
            diagA.pb(pivot);
            pivot = matB[i][j];
            diagB.pb(pivot);
            i--;
            j++;
        }
        sort(diagA.begin(), diagA.end());
        sort(diagB.begin(), diagB.end());
        if(diagA!=diagB){
            flag = 0;
            break;
        }
    }
    (flag==0)?NO:YES;
    return 0;
}


/*
SAMPLE I/O

*/
