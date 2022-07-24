#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int l = 1, r = 1000000;
    while(l != r) {
        int mid = (l + r + 1) / 2;
        cout << mid << endl;
        string s;
        cin >> s;
        if(s.compare("<") == 0){
            r = mid - 1;
        }
        else{
            l = mid;
        }
    }
    cout << "! " << l << endl;
}
