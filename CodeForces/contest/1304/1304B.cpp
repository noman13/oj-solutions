#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
bool is_palindrome(string s);

bool is_palindrome(string s)
{
    int sz, l, h, i, j;
    sz = s.size();
    l=0; h=sz -1;
    while(h>l){
        if(s[l++]!=s[h--]){
            return false;
        }
    }
    return true;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m , i, j, pivot, flag;
    string s1, s2, s3, ans;

    vector<string> v;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> s1;
        v.pb(s1);
        s1.clear();
    }

    for(i=0; i<n; i++){
        s1 = v[i];
        if(is_palindrome(s1)){
            ans+=s1;
            s1.clear();
            break;
        }

    }
    for(i=0; i<n;i++){
        flag=0;
        s1 = v[i];
        s2 = s1;
        reverse(s2.begin(), s2.end());
        for(j=i+1; j<n; j++){
            if(v[j]==s2){
                flag = 1;
                break;
            }
        }
        if(flag==1){
            ans+=s1;
            s2+=ans;
            ans = s2;
        }

    }
    cout << ans.size() << "\n" << ans << "\n";
    return 0;
}


/*
SAMPLE I/O

*/
