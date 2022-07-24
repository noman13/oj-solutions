#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m, i, pivot, last, x;
    vector <int> qa;
    queue <int> q;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> pivot;
        q.push(i);
        qa.push_back(pivot);
    }
    while(!q.empty()){
        x = q.front();
        if(m>=qa[x]){
            q.pop();
            if(q.empty()){
                last = x+1;
            }
        }
        else{
            qa[x]-=m;
            q.pop();
            if(q.empty()){
                last = x+1;
            }
            q.push(x);
        }
    }
    cout << last << "\n";
    return 0;
}


/*
SAMPLE I/O

input
5 2
1 3 1 4 2
output
4

input
6 4
1 1 2 2 3 3
output
6

*/
