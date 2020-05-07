#include<iostream>
using namespace std;

int main()
{
    int t, s, p, v, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int max = 0;
        while(n--)
        {
            cin >> s >> p >> v;
            s++;
            if(max < v * (p/s))
                max = v * (p/s);
        }
        cout << max << "\n";
    }
}