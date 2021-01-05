#include<iostream>
#define ull unsigned long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ull k;
        int d0, d1;
        cin >> k >> d0 >> d1;

        int s = d0 + d1;
        int c = (2*s) % 10 + (4*s) % 10 + (8*s) % 10 + (6*s) % 10;

        ull num_cycles = (k-3) / 4;
        ull total = 0

        if (k == 2)
            total = s;
        else
        {
            total = 2*s + (c * 1LL * num_cycles);
            int left_over = (k-3) - (num_cycles * 4);

            int p = 2;
            for(int i=1; )
        }
        
    }
}
