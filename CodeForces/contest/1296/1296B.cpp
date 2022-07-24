#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, spend, balance, bonus, remain, ans;
    ll n;
    cin >> t;
    while(t--){
        cin >> n;
        ans=0;
        spend =0;
        balance=0;
        bonus=0;
        remain=0;

        balance = n;
        spend = balance - (balance%10);
        bonus = spend/10;
        remain = balance - spend;
        ans+=spend;
        while(bonus>0){
            balance = bonus+remain;
            spend = balance - (balance%10);
            bonus = spend/10;
            remain = balance - spend;
            ans+=spend;
        }
        cout << ans+balance << "\n";
    }
    return 0;
}


/*
SAMPLE I/O


*/
