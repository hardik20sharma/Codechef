#include<bits/stdc++.h>
using namespace std;

class Can
{
public:
    int temp, price;
    Can(int val1, int val2)
    {
        temp = val1;
        price = val2;
    }
};

int temp_after_m_min(int can_temp, int k, int m)
{
    if(k == can_temp || m == 0)
        return can_temp;
    else if(k < can_temp)
        return temp_after_m_min(can_temp - 1, k, m-1);
    else
        return temp_after_m_min(can_temp + 1, k, m-1);
}

bool cmp(Can c1, Can c2)
{
    return c1.price < c2.price;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, m, k, l, r;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> k >> l >> r;

        vector<Can> can;
        for(int i=0; i<n; i++)
        {
            int c, p;
            cin >> c >> p;
            c = temp_after_m_min(c, k, m);
            can.push_back(Can(c, p));
        }

        sort(can.begin(), can.end(), cmp);

        bool found = false;
        int i;
        for(i=0; i<n && !found; i++)
            if(l <= can[i].temp && can[i].temp <= r)
                found = true;

        (found) ? cout << can[i-1].price << "\n" : cout << "-1\n";
    }
}