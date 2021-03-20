#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        bool first_winning = false;

        for(int i=0; i < n; i++)
            if(i+1 < a[i])
            {
                first_winning = false;
                break;
            }
            else if( (i+1 - a[i]) % 2  == 1)
                first_winning = !first_winning;

        first_winning ? cout << "First\n" : cout << "Second\n";
    }
}

/*
    Increase a[i] to a[i]+1

    1 2 3 3
    1 2 3 4 - F

    1 1 3 3
    1 2 3 3 - F
    1 2 3 4 - S


    1 1 2 2 5
    1 2 2 2 5 - F
    1 2 3 2 5 - S
    1 2 3 3 5 - F
    1 2 3 4 5 - S
*/