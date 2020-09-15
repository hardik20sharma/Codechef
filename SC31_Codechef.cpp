#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    short t, n;
    cin >> t;
    while(t--)
    {
        vector<bool> arr(10, false);
        
        cin >> n;
        while(n--)
        {
            string s;
            cin >> s;
            for(short i=0; i<10; i++)
            {
                bool temp = s[i] - '0';
                (arr[i] == temp) ? arr[i] = false : arr[i] = true;
            }
        }

        short res = 0;
        for(short i=0; i<10; i++)
            if(arr[i])
                res++;

        cout << res << "\n";
    }
}