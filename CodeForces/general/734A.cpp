#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, A=0, D=0, i;
    string s;
    cin >> n >> s;
    for(i=0; i<s.size(); i++){
        if(s[i]=='A'){
            A++;
        }
        else if(s[i]=='D'){
            D++;
        }
    }
    if(A>D){
        cout << "Anton" << "\n";
    }
    else if(D>A){
        cout << "Danik" << "\n";
    }
    else{
        cout << "Friendship" << "\n";
    }
    return 0;
}


/*
SAMPLE I/O


*/
