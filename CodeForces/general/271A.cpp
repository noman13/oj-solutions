#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int y, i, j, k, m, x, flag;
    int arr[11];
    cin >> y;
    for(i=y+1; i<9100;){
        for(k=0; k<11; k++){
            arr[k] = 0;
        }
        flag = 0;
        m = i;
        while(m){
            x = m%10;
            arr[x]++;
            m/=10;
        }
        for(j=0; j<10; j++){
            if(arr[j]>1){
                flag = 1;
            }
        }
        if(flag==1){
            i++;
        }
        else{
            cout << i <<"\n";
            break;
        }
    }
    return 0;
}
