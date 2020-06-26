#include<bits/stdc++.h>
using namespace std;
#define ull long long int
int main()
{
    int t;
    ull x, y, l, r, z;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> l >> r;
        if(x==0 || y==0)
        {
            cout << l << "\n";
            continue;
        }

        z = (x|y);

        while(r < z)
        {
            ull n = log2(z);
            z = (z & ~(1 << n));
        }
/*
        int temp = z, max = (x & z) * (y & z);
        while(temp < r)
        {
            if(max < (x & temp) * (y & temp))
                z = temp;
            temp++;
        }
*/
        if(z < l)
            z=l;

        cout << z << "\n";
    }
}