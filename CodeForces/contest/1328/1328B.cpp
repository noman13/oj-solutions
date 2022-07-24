#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, k, i, j, pivot, sum, dif, pos1, pos2, temp;
    char *s;
    cin >> t;
    while(t--){
        cin >> n >> k;
        char s[n+1];
        s[n] = '\0';
        memset(s,'a', n*sizeof(char));
        //cout<<s << "\n";
        sum =0;
        for(i=1; ;i++){
            sum+=i;
            if(sum>=k){
                break;
            }
        }
        pivot = i;
        temp = 2*pow(10,9);
        k = min(temp, k);
        dif= sum-k;
        pos1 = n-pivot;
        pos2 = pos1+dif+1;
        //cout << pivot << "\n";
        s[pos1-1] = 'b';
        s[pos2-1] = 'b';
        //cout << s << "\n";
        cout << pos1-1 << " " << pos2-1;
    }
    return 0;
}


/*
SAMPLE I/O

*/
