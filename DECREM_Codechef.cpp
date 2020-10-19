#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, l, r; cin >> t;
    while(t--)
    {
        cin >> l >> r;

        if(l == 1 || 2*l <= r)
            cout << "-1\n";
        else
            cout << r << "\n";
    }
}

/*

    r = 3       valid when l = 2        l = 2 to r = 3
    3 % 3 = 0
    3 % 2 = 1

    r = 4       valid when l = 3        l = 3 to r = 4
    4 % 4 = 0
    4 % 3 = 1
    4 % 2 = 0
    4 % 1 = 0

    r = 5       valid when l = 3        l = 3 to r = 5
    5 % 5 = 0
    5 % 4 = 1
    5 % 3 = 2
    5 % 2 = 1

    r = 6       valid when l = 4        l = 4 to r = 6
    6 % 6 = 0
    6 % 5 = 1
    6 % 4 = 2
    6 % 3 = 0
    6 % 2 = 0

    r = 7       valid when l = 4        l = 4 to r = 7
    7 % 7 = 0
    7 % 6 = 1
    7 % 5 = 2
    7 % 4 = 3
    7 % 3 = 1
    7 % 2 = 1

    r = 8       valid till l = 5        l = 5 to r = 8
    8 % 8 = 0
    8 % 7 = 1
    8 % 6 = 2
    8 % 5 = 3
    8 % 4 = 0
    8 % 3 = 2
    8 % 2 = 1

    r = 9       valid till l = 5        l = 5 to r = 8
    9 % 9 = 0
    9 % 8 = 1
    9 % 7 = 2
    9 % 6 = 3
    9 % 5 = 4
    9 % 4 = 1
    9 % 3 = 0
    9 % 2 = 1

    r = 10       valid till l = 5       l = 6 to r = 10
    10 % 10 = 0
    10 % 9 = 1
    10 % 8 = 2
    10 % 7 = 3
    10 % 6 = 4
    10 % 5 = 0
    10 % 4 = 2
    10 % 3 = 1
    10 % 2 = 0

    r = 20      valid till l = 11       l = 11 to r = 20
    20 % 20 = 0
    20 % 19 = 1
    20 % 18 = 2
    20 % 17 = 3
    20 % 16 = 4
    20 % 15 = 5
    20 % 14 = 6
    20 % 13 = 7
    20 % 12 = 8
    20 % 11 = 9
    20 % 10 = 0

    21 % 20 = 1
    21 % 19 = 2
    21 % 18 = 3
    21 % 17 = 4
    21 % 16 = 5
    21 % 15 = 6
    21 % 14 = 7
    21 % 13 = 8
    21 % 12 = 9
    21 % 11 = 10
    21 % 10 = 2
*/