#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, i, j, pivot, x, y, xl, xh, yl, yh, dist, mx=0;
    typedef pair<int,int> p;
    p pa;
    vector<p> v, sch, ans;
    map<p, int> mpp;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x >> y;
        v.pb(mp(x,y));
    }
    for(i=0; i<n; i++){
        sch.clear();
        if(v[i].first==0 ){
            xl = 0;
            if(v[i].second < 0){
            double temp = floor((double)v[i].second/10);
            yl = temp*10;
            yh = yl+10;
        }
        else if(v[i].second > 0){
            yl = (v[i].second/10)*10;
            yh = yl+10;
        }
        sch.pb(mp(xl,yl));
        sch.pb(mp(xl,yh));
        for(j=0; j<2; j++){
            dist = abs(v[i].first-sch[j].first)+abs(v[i].second-sch[j].second);
            if(dist<=10){
                mpp[sch[j]]++;
                //cout << sch[j].first << "," << sch[j].second << "\n";
            }
        }
        }
        if(v[i].second==0){
            yl=0;
            if(v[i].first < 0){
            double temp = floor((double)v[i].first/10);
            xl = temp*10;
            xh = xl+10;
            //cout << xl<<  " " << xh << "\n";
        }
        else if(v[i].first > 0){
            xl = (v[i].first/10)*10;
            xh = xl+10;
        }

        if(v[i].second < 0){
            double temp = floor((double)v[i].second/10);
            yl = temp*10;
            yh = yl+10;
        }
        else if(v[i].second > 0){
            yl = (v[i].second/10)*10;
            yh = yl+10;
        }
        sch.pb(mp(xl,yl));
        sch.pb(mp(xh,yl));
        for(j=0; j<2; j++){
            dist = abs(v[i].first-sch[j].first)+abs(v[i].second-sch[j].second);
            if(dist<=10){
                mpp[sch[j]]++;
                //cout << sch[j].first << "," << sch[j].second << "\n";
            }
        }
        }
        else{
            if(v[i].first < 0){
            double temp = floor((double)v[i].first/10);
            xl = temp*10;
            xh = xl+10;
            //cout << xl<<  " " << xh << "\n";
        }
        else if(v[i].first > 0){
            xl = (v[i].first/10)*10;
            xh = xl+10;
        }

        if(v[i].second < 0){
            double temp = floor((double)v[i].second/10);
            yl = temp*10;
            yh = yl+10;
        }
        else if(v[i].second > 0){
            yl = (v[i].second/10)*10;
            yh = yl+10;
        }
        sch.pb(mp(xl,yl));
        sch.pb(mp(xl,yh));
        sch.pb(mp(xh,yl));
        sch.pb(mp(xh,yh));
        for(j=0; j<4; j++){
            dist = abs(v[i].first-sch[j].first)+abs(v[i].second-sch[j].second);
            if(dist<=10){
                mpp[sch[j]]++;
                //cout << sch[j].first << "," << sch[j].second << "\n";
            }
        }
        }

    }
    map<p, int> :: iterator it;
    for(it=mpp.begin(); it!=mpp.end(); it++){
        pivot = it->second;
        if(pivot>mx){
            mx = pivot;
        }
        //cout << pivot << "\n";
        //pa = it->first;
        //cout<< pa.first << ","<< pa.second << " " << pivot << "\n";
    }
    //cout << mx << endl;
    for(it=mpp.begin(); it!=mpp.end(); it++){
        pivot = it->second;
        if(pivot==mx){
            pa = it->first;
            ans.pb(mp(pa.first, pa.second));
        }
    }
    sort(ans.begin(), ans.end());
    for(auto i: ans){
        cout << i.first << " " << i.second << "\n";
    }

    return 0;
}


/*
SAMPLE I/O

*/
