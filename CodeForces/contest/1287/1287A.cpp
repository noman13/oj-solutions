#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, k;
    int i, j, l, m, n, p;
    int MAX;
    char  s[111];
    int cnt[111];
    cin >> t;
    for(i=0;i<t;i++){
        MAX = 0;
        cin >> k;
        for(j=0; j<k; j++){
            cin >> s[j];
        }
        for(p=0; p<111;p++){
            cnt[p] = 0;
        }
        m = 0;
        for(l=0; l<k; l++){
            if(s[l] == 'P'){
                cnt[m]++;
            }
            else if(s[l] == 'A'){
                m++;
            }
        }
        for(n=1; n<k; n++){
            if(MAX < cnt[n]){
                MAX = cnt[n];
            }
        }
        cout << MAX << "\n";
    }
    return 0;
}

/*
input
1
4
PPAP
output
1

input
3
12
APPAPPPAPPPP
3
AAP
3
PPA
output
4
1
0
*/
