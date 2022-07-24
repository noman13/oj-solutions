//https://codeforces.com/contest/731/problem/A
#include <bits/stdc++.h>
using namespace std;
int dist_a(char ch);
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    int r, i;

    r = dist_a(s[0]);
    for(i=1; i<s.size(); i++){
        if(abs(s[i]-s[i-1])>13){
            r+= dist_a(s[i]) + dist_a(s[i-1]);
        }
        else if(abs(s[i]-s[i-1])<13){
            r+= abs(s[i]-s[i-1]);
        }
        else{
            r+=13;
        }
    }
    cout << r << "\n";
    return 0;
}
int dist_a(char ch)
{
    int dist;
    if(abs(ch-'a') > 13){
        dist = 26 - abs(ch-'a');
    }
    else{
        dist = abs(ch-'a');
    }
    return dist;
}
/*
SAMPLE I/O

input : fyyptqqxuciqvwdewyppjdzur
output: 117

input
zeus
output
18

input
map
output
35

input
ares
output
34

*/
