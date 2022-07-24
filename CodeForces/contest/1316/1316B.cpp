#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

string s;
int n;

string generate_str(int i)
{
    string s1, s2, ans;
    if((n%2==0&&(i+1)%2==0) ||  (n%2!=0&&(i+1)%2!=0)){
        s1=s.substr(i,n-i);
        s2=s.substr(0,i);
        reverse(s2.begin(), s2.end());
        ans = s1 + s2;
    }
    else{
        s1=s.substr(i,n-i);
        s2=s.substr(0,i);
        ans = s1 + s2;
    }
    return ans;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, i, j, pivot;
    typedef pair<string, int> p;
    vector<p>v;
    string s1, s2, temp;
    cin >> t;
    while(t--){
        s.clear();
        v.clear();
        cin >> n >> s;
        s1 = s;
        temp = generate_str(0);
        pivot = 1;
        for(i=1; i<n; i++){
            s2 = generate_str(i);
            if(s2<temp){
                temp = s2;
                pivot = i+1;
            }
            s2.clear();
        }
        cout << temp << "\n" << pivot << "\n";
    }
    return 0;
}


/*
SAMPLE I/O

*/
