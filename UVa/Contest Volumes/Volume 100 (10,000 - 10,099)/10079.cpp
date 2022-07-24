#include <bits/stdc++.h>
using namespace std;

long long pieces(int a) {
    if(a == 0) return 1LL;
    return (long long) a + pieces(a - 1);
}

int main(){
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    while(cin >> n && n >= 0){
        cout << pieces(n) << "\n";
    }
    return 0;
}


