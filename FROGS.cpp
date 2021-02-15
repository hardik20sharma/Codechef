#include<bits/stdc++.h>
using namespace std;

struct frog
{
    short weight, curr_pos, jump_dist;
};

bool cmp(frog &f1, frog &f2)
{
    return f1.weight < f2.weight;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        short n; cin >> n;

        vector<frog> frogs(n);

        for(short i=0; i<n; frogs[i].curr_pos = i+1, i++)
            cin >> frogs[i].weight;

        for(short i=0; i<n; i++)
            cin >> frogs[i].jump_dist;

        sort(frogs.begin(), frogs.end(), cmp);

        short res = 0;
        for(short i=1; i<n; i++)
            while(frogs[i-1].curr_pos >= frogs[i].curr_pos)
            {
                frogs[i].curr_pos += frogs[i].jump_dist;
                res++;
            }

        cout << res << "\n";
    }
}

/*
    1 2 3 4 - position
    2 1 4 3 - weight
    4 1 2 4 - length


    2 1 4 3 - position
    1 2 3 4 - weight
    1 4 4 2


    2 5 4 3
    1 2 3 4
    1 4 4 2


    2 5 8 3
    1 2 3 4
    1 4 4 2


    2 5 8 5
    1 2 3 4
    1 4 4 2


    2 5 8 7
    1 2 3 4
    1 4 4 2


    2 5 8 9
    1 2 3 4
    1 4 4 2
*/