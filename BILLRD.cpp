#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pos_after_hit(int x, int y, int n)
{
    // Using formula y = m * x + c, in this case it would be y = x + c

    int c = y-x;

    vector<vector<int>> point_of_contacts (4, vector<int> (2));

    if(c < 0)   // Case when ball hits right wall first
    {
        point_of_contacts[0] = {-c, 0};
        point_of_contacts[1] = {n, n+c};
        point_of_contacts[2] = {n+c, n};
        point_of_contacts[3] = {0, -c};
    }
    else    // Case when ball hits left wall first
    {
        point_of_contacts[0] = {0, c};
        point_of_contacts[1] = {n-c, n};
        point_of_contacts[2] = {n, n-c};
        point_of_contacts[3] = {c, 0};
    }

    return point_of_contacts;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, k, x, y; cin >> t;
    while(t--)
    {
        cin >> n >> k >> x >> y;
        
        if(x == y)
            { cout << n << " " << n << "\n"; continue; }

        vector<vector<int>> res = pos_after_hit(x, y, n);
        k %= 4;
        cout << res[k][0] << " " << res[k][1] << "\n";
    }
}

/*
    n = n*n matrix / board
    k = number of hits
    x, y = initial position
*/