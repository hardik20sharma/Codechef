#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, a, b; cin >> t;
    while(t--)
    {
        cin >> a >> b;
        
        int no_even_x = a/2, no_even_y = b/2;

        int no_odd_x = a - no_even_x, no_odd_y = b - no_even_y;

        cout << (no_even_x * no_even_y) + (no_odd_x * no_odd_y) << "\n";
    }
}