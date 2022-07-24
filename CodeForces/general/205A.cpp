#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, MIN, flag = 0, pivot;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    MIN = a[0];
    for(i=1; i<n; i++){
        if(a[i]< MIN){
            MIN = a[i];
            pivot = i+1;
            flag = 0;
        }
        else if(a[i]==MIN){
            flag = 1;
        }
        //cout << "MIN : " << MIN << " flag : " << flag << "\n";
    }
    if(flag==1){
        cout << "Still Rozdil" << "\n";
        return 0;
    }
    if(a[0]==MIN){
        cout << 1 << "\n";
    }
    else{
        cout << pivot << "\n";
    }
    return 0;
}


/*
SAMPLE I/O


*/
