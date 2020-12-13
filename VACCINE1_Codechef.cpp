#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int d1, v1, d2, v2, p, day = 1, vaccines = 0;
    
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    for( ;vaccines < p; day++)
    {
        if(d1 <= day)
            vaccines += v1;
        if(d2 <= day)
            vaccines += v2;
    }

    cout << day-1 << "\n";
}