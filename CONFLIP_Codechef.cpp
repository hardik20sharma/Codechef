#include<iostream>
#include<vector>
#include<algorithm>
#define tails true
#define heads false
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int g;
        cin >> g;
        while(g--)
        {
            int n, i, q;
            cin >> i >> n >> q;

            if(n % 2==0)
                cout << n/2 << "\n";
            else
                if(i == q)
                    cout << n/2 << "\n";
                else
                    cout << n/2 + 1 << "\n";
        }
    }
}