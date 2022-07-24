#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s1, s2, s3, s;
    int i, j;
    map <string, int> mp1;
    map <string, int> mp2;
    cin >> s1 >> s2 >> s3;
    for(i=0; i<s1.size(); i++){
        s = s1[i];
        mp1[s]++;
    }
    for(i=0; i<s2.size(); i++){
        s = s2[i];
        mp1[s]++;
    }
    for(i=0; i<s3.size(); i++){
        s = s3[i];
        mp2[s]++;
    }
    if(mp1 == mp2){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

input
SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS
output
YES

input
PAPAINOEL
JOULUPUKKI
JOULNAPAOILELUPUKKI
output
NO

input
BABBONATALE
FATHERCHRISTMAS
BABCHRISTMASBONATALLEFATHER
output
NO

*/

