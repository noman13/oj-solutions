#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,i,j,p;
    long long ways = 0;
    cin >> n >> k;
    map <string, int> mp;
    string f[n];
    for(i=0; i<n; i++){
        cin >> f[i];
        mp[f[i]]++;
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            string str;
            for(p=0; p<k; p++){
                if(f[i][p]==f[j][p]){
                    str+=f[i][p];
                }
                else if(f[i][p]!='S'&&f[j][p]!='S'){
                    str+='S';
                }
                else if(f[i][p]!='E'&&f[j][p]!='E'){
                    str+='E';
                }
                else{
                    str+='T';
                }
            }
            ways+=mp[str];
        }
    }
    cout << ways/3 << "\n";
    return 0;
}
