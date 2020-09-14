#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        short n; cin >> n;
        
        short arr[n][n];
        for(short i=0; i<n; i++)
            for(short j=0; j<n; j++)
                cin >> arr[i][j];
        
        short cnt = 0;
        for(short i=n-1; i>0; i--)
            if( (arr[i][i] - arr[i-1][i] != 1 && cnt % 2 == 1) || ( arr[i][i] - arr[i][i-1] != 1 && cnt % 2 == 0) )
                    cnt++;
        cout << cnt << "\n";
    }
}