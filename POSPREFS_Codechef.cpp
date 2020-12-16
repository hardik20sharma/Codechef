#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, k; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        if (n == k)
            for(int i=1; i<=n; i++)
                cout << i << " ";
        else
        {
            int a[n+1];
            a[1] = -1, a[2] = 2;

            int temp1 = 1;
            for(int i=3; i<=n; i+=2, temp1++)
                if(k > temp1)
                    a[i] = i;
                else
                    a[i] = -i;
            
            int temp2 = n-2;
            for(int i=4; i<=n; i+=2, temp2--)
                if(k > temp2)
                    a[i] = i;
                else
                    a[i] = -i;

            for(int i=1; i<=n; i++)
                cout << a[i] << " ";
        }

        cout << "\n";
    }
}

/*
    N = 2, K = 1    -1  2
    N = 2, K = 2    1   2

    N = 3, K = 1	-1  2   -3
    N = 3, K = 2	-1  2   3
    N = 3, K = 3	1   2   3


    N = 4, K = 1	-1  2  -3   -4
    N = 4, K = 2	-1  2   3   -4
    N = 4, K = 3    -1  2   3   4   -- new line
    N = 4, K = 4	1   2   3   4



    N = 5, K = 1    -1  2  -3   -4  -5
    N = 5, K = 2    -1  2   3   -4  -5
    N = 5, K = 3    -1  2   3   -4  5   -- new line
    N = 5, K = 4    -1  2   3   4   5
    N = 5, K = 5    1   2   3   4   5


    N = 6, K = 1    -1  2  -3   -4  -5  -6
    N = 6, K = 2    -1  2   3   -4  -5  -6
    N = 6, K = 3    -1  2   3   -4  5   -6
    N = 6, K = 4    -1  2   3   -4  5   6   -- new line
    N = 6, K = 5    -1  2   3   4   5   6
    N = 6, K = 6    1   2   3   4   5   6


    N = 7, K = 1    -1  2  -3   -4  -5  -6  -7
    N = 7, K = 2    -1  2   3   -4  -5  -6  -7
    N = 7, K = 3    -1  2   3   -4  5   -6  -7
    N = 7, K = 4    -1  2   3   -4  5   -6  7   -- new line
    N = 7, K = 5    -1  2   3   -4  5   6   7
    N = 7, K = 6    -1  2   3   4   5   6   7
    N = 7, K = 7    1   2   3   4   5   6   7


    N = 8, K = 1    -1  2  -3   -4  -5  -6  -7  -8
    N = 8, K = 2    -1  2   3   -4  -5  -6  -7  -8
    N = 8, K = 3    -1  2   3   -4  5   -6  -7  -8
    N = 8, K = 4    -1  2   3   -4  5   -6  7   -8
    N = 8, K = 5    -1  2   3   -4  5   -6  7   8
    N = 8, K = 6    -1  2   3   -4  5   6   7   8
    N = 8, K = 7    -1  2   3   4   5   6   7   8
    N = 8, K = 8    1   2   3   4   5   6   7   8

    if(n == k)
        print 1 2 3 4...
    
    print
    i = -1
    i = 2
    if(i % 2)
        print 3 if k > n-7 = 8-7 = 1    else print -3       temp = 1 if (k > temp) print 3 else print -3
        print 5 if k > n-6 = 8-6 = 2    else print -5       temp = 2 if (k > temp) print 5 else print -5
        print 7 if k > n-5 = 8-5 = 3    else print -7

    else
        print 4 if k > n-2 = 8-2 = 6    else print -4       temp = 6 if (k > temp) print 4 else print -4
        print 6 if k > n-3 = 8-3 = 5    else print -6
        print 8 if k > n-4 = 8-4 = 4    else print -8
*/