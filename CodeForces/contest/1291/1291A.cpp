#include <bits/stdc++.h>
using namespace std;
int sum(string s)
{
    int summ=0, i;
    for(i=0; i<s.size(); i++){
        summ+=s[i]-48;
    }
    return summ;
}

bool is_even(string s)
{
    int n = s.size();
    int pivot = s[n-1]-48;
    if(pivot%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, i, pivot, sum_var;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;

        //sum_var=sum(s);
        //cout << sum_var;
        if(sum(s)%2==0 && !is_even(s)){
            cout << s << "\n";
            continue;
        }
        if(sum(s)%2!=0){
            for(i=0; i<s.size(); i++){
                pivot = s[i]-48;
                if(pivot%2!=0){
                    s.erase(s.begin()+i);
                    break;
                }
            }
        }
        if(is_even(s)){
            for(i=s.size()-1; i>=0; i--){
                s.erase(s.begin()+i);
                if(!is_even(s)){
                    break;
                }
            }
        }
        s.erase(0, min(s.find_first_not_of('0'), s.size()-1));
        if(sum(s)%2==0 && !is_even(s) && !s.empty()){
            cout << s << "\n";
        }
        else{
            cout << -1 << "\n";
        }

    }
    return 0;
}


/*
SAMPLE I/O


*/
