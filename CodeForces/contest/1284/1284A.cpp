#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, q;
    long long i, j, k;
    string s[300], t[300];
    long long qq[3000], a, b, x, y, z;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> s[i];
    }
    for(j=0; j<m; j++){
        cin >> t[j];
    }
    cin >> q;
    for(k=0; k<q; k++){
        cin >> qq[k];
    }

    for(b=0; b<q; b++){
        z = qq[b]-1;
        cout << s[z%n]+t[z%m]<<endl;
    }


    return 0;
}

/*

input
10 12
sin im gye gap eul byeong jeong mu gi gyeong
yu sul hae ja chuk in myo jin sa o mi sin
14
1
2
3
4
10
11
12
13
73
2016
2017
2018
2019
2020
output
sinyu
imsul
gyehae
gapja
gyeongo
sinmi
imsin
gyeyu
gyeyu
byeongsin
jeongyu
musul
gihae
gyeongja


Note
The first example denotes the actual names used in the Gapja system.
These strings usually are either a number or the name of some animal.

*/

