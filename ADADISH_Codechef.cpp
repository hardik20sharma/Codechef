#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;

        vector<int> time(n);
        for(int i=0; i<n; i++)
            cin >> time[i];

        if(n == 1)
            { cout << time[0] << "\n"; continue; }

        sort(time.begin(), time.end(), greater<int>());

        int burner_1 = time[0], burner_2 = time[1];

        for(int i=2; i<n; i++)
            if(burner_2 < burner_1)
                burner_2 += time[i];
            else
                burner_1 += time[i];

        cout << max(burner_1, burner_2) << "\n";
    }
}