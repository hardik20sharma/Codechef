/*
    a1 a2   b1 b2 - OG
    
    b1 a2   a1 b2 - Possible swap 1
    b2 a2   b1 a1 - Possible swap 2

    a1 b1   a2 b2 - Possible swap 3
    a1 b2   b1 a2 - Possible swap 4
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        int a1 = a/10, a2 = a%10, b1 = b/10, b2 = b%10, sum;
 
                        sum = a + b;
                        sum = max (sum, a1*10 + b2 + b1*10 + a2);
        if(a1)          sum = max (sum, b2*10 + a2 + b1*10 + a1);
        if(b1)          sum = max (sum, a1*10 + b1 + a2*10 + b2);
        if(a1 & b1)     sum = max (sum, b1*10 + a2 + a1*10 + b2);

        cout << sum << "\n";
    }
}