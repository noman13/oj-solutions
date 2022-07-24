#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"

#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    optimize();
    double a, b, c;
    cin >> a >> b >> c;
    cout << 4*(sqrt(a*b/c) + sqrt(b*c/a) + sqrt(c*a/b)) << endl;
    return 0;
}


/*
SAMPLE I/O

*/
