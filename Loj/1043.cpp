/*Bisection Method [Binary search]*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
double bisection(double AB, double AC, double BC, double R)
{
    double R_new, low, high, mid;
    double AD, AE, DE;
    double S_ADE, S_ABC, ABC, ADE, BDEC;
    low = 0.0;
    high = AB;
    while(high-low > .00000001){
        AD = (low+high)/2;
        AE = (AD*AC)/AB;
        DE = (AD*BC)/AB;
        S_ADE = (AD+DE+AE)/2;
        ADE = sqrt(S_ADE*(S_ADE-AD)*(S_ADE-DE)*(S_ADE-AE));
        S_ABC = (AB+BC+AC)/2;
        ABC = sqrt(S_ABC*(S_ABC-AB)*(S_ABC-AC)*(S_ABC-BC));
        BDEC = ABC - ADE;
        R_new = ADE/BDEC;
        if(R_new < R){
            low = AD;
        }
        else{
            high = AD;
        }
    }
    return AD;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    double AB, AC, BC, R;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> AB >> AC >> BC >> R;
        //cout << setprecision(8);
        //cout << "Case "<< i+1 << ": " << bisection(AB, AC, BC, R) << "\n";
        printf("Case %d: %0.7lf\n", i+1, bisection(AB, AC, BC, R));
    }
    return 0;
}


/*
SAMPLE I/O

For each case of input you have to print the case number and AD.
Errors less than 10-6 will be ignored.

input
4

100 100 100 2

10 12 14 1

7 8 9 10

8.134 9.098 7.123 5.10

output
Case 1: 81.6496580

Case 2: 7.07106781

Case 3: 6.6742381247

Case 4: 7.437454786
*/
