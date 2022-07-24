#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, x=0;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s=="++X"){
            ++x;
        }
        else if(s=="X++"){
            x++;
        }
        else if(s=="--X"){
            --x;
        }
        else if(s=="X--"){
            x--;
        }
    }
    cout << x << "\n";
    return 0;
}


/*
SAMPLE I/O


*/
