#include <bits/stdc++.h>
using namespace std;



bool compfunc(const pair<int, int> &a, const pair<int, int> &b){
    if(a.first < b.first) return true;
    if(a.first == b.first) return a.second > b.second;
    else return false;
}


int main()
{
    
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(),v.end(), compfunc);
    for(auto i : v)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
