#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
vector<int> v;
void gen_ans(int x);
void gen_ans(int x)
{
    if(x==2){
        v.pb(2);
    }
    else if(x==3){
        v.pb(3);
    }
    else if(x==4){
        v.pb(2);
        v.pb(2);
        v.pb(3);
    }
    else if(x==5){
        v.pb(5);
    }
    else if(x==6){
        v.pb(5);
        v.pb(3);
    }
    else if(x==7){
        v.pb(7);
    }
    else if(x==8){
        v.pb(7);
        v.pb(2);
        v.pb(2);
        v.pb(2);
    }
    else if(x==9){
        v.pb(2);
        v.pb(3);
        v.pb(3);
        v.pb(7);
    }

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, i, j, pivot, sz;
    string s;
    char *ptr;
    cin >> n >> s;
    for(i=0; i<n; i++){
        if(s[i]!='0' && s[i]!='1'){
            pivot = s[i]-48;
            gen_ans(pivot);
        }
    }
    sz = v.size();
    sort(v.begin(),v.end(), greater<int>());
    for(i=0; i<sz; i++){
        cout << v[i];
    }
    return 0;
}


/*
SAMPLE I/O

*/
