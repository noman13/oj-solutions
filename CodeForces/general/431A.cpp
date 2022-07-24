#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int> a;
    string s;
    int i, pivot, sum=0;
    for(i=0; i<4; i++){
        cin >> pivot;
        a.push_back(pivot);
    }
    cin >> s;
    for(i=0; i<s.size(); i++){
        if(s[i]=='1'){
            sum+=a[0];
        }
        else if(s[i]=='2'){
            sum+=a[1];
        }
        else if(s[i]=='3'){
            sum+=a[2];
        }
        else if(s[i]=='4'){
            sum+=a[3];
        }
    }
    cout << sum << endl;
    return 0;
}


/*
SAMPLE I/O


*/
