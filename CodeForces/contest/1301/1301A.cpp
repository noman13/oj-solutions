#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, pivot, i, j, sz, flag;
    string a, b, c, s;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        s.clear();
        sz=a.size();
        for(i=0; i<sz; i++){
            if(a[i]!=b[i] && b[i]!=c[i] && c[i]!=a[i]){
                cout << "NO" << "\n";
                goto jump;
            }
        }
        for(i=0; i<sz; i++){
            if(a[i]==b[i]){
                s+=c[i];
            }
            else if(a[i]==c[i]){
                s+=b[i];
            }
            else if(b[i]==c[i]){
                s+=a[i];
            }
        }
        flag = 0;
        for(i=0; i<sz; i++){
            if(a[i]==b[i] && b[i]==c[i] && c[i]==a[i]){
                continue;
            }
            else if(s[i]==c[i]){
                flag = 1;
                break;
            }
        }
        //cout << s << "\n";
        if(flag==0){
            cout << "YES" << "\n";
        }
        else if(flag==1){
            cout << "NO" << "\n";
        }
        jump:
            continue;
    }
    return 0;
}


/*
SAMPLE I/O

1
gcfe
eghe
gche


*/
