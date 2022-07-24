#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int i, step, seed, seednew, mod, cnt=1;

    while(cin >> step >> mod){
        seed = 0;
        bool flag = true;
        bool visited[mod] = {0};
        for(i=0; i<mod; i++){
            seednew = (seed+step)%mod;
            if(visited[seed]==1){
                flag = false;
                break;
            }
            visited[seed] = 1;
            seed = seednew;
        }
        if(flag){
            cout<< setw(10) << step << setw(10) << mod << "    Good Choice\n\n";
        }
        else{
            cout<< setw(10) << step << setw(10) << mod << "    Bad Choice\n\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
