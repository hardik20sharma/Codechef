#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt = 0;
        cin >> n;

        for(int i = 1; pow(5, i) <= n; i++)
            cnt += (int) ( n / (int) (pow(5, i)) );

        cout << cnt << "\n";
    }
}