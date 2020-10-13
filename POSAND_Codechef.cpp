#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        
        if(n == 1)
            { cout << "1" << "\n"; continue; }

        // Handles all cases, when n is power of 2, i.e 2, 4, 8, 16, 32, 64...
        if(n == pow(2, (int) log2(n)))
            { cout << "-1" << "\n"; continue; }

        if(n >= 3)
            cout << "2 3 1 ";
        
        for(int i=4, count = 3; count < n; i++)
        {
            if( (i) == pow(2, (int) log2(i)) )
            {
                cout << i+1 << " ";
                count++;
            }

            cout << i << " ";
            count++;

            if( (i) == pow(2, (int) log2(i)) )
                i++;
        }

        cout << "\n";
    }
}

/*

    Count   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16

    3   --  2   3   1
    5   --  2   3   1   5   4
    6   --  2   3   1   5   4   6
    7   --  2   3   1   5   4   6   7
    9   --  2   3   1   5   4   6   7   9   8
    10  --  2   3   1   5   4   6   7   9   8   10
    11  --  2   3   1   5   4   6   7   9   8   10  11
    12  --  2   3   1   5   4   6   7   9   8   10  11  12
    13  --  2   3   1   5   4   6   7   9   8   10  11  12  13
    14  --  2   3   1   5   4   6   7   9   8   10  11  12  13  14
    15  --  2   3   1   5   4   6   7   9   8   10  11  12  13  14  15
    17  --  2   3   1   5   4   6   7   9   8   10  11  12  13  14  15  17  16
*/