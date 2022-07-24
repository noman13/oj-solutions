#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a;
            if (a == 1)
            {
                cout << abs(i - 4) + abs(j - 4) << endl;
            }
        }
    }
    return 0;
}

/*
inputCopy
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
outputCopy
3


inputCopy
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
outputCopy
1

*/
