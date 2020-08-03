#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    short t, m, n, temp;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<bool> jobs(n+1, false);
        vector<short> chef_jobs, assistant_jobs;

        while(m--)
        {
            cin >> temp;
            jobs[temp] = true; // jobs which are already done
        }

        bool job_toggle = true; // true for chef, false for assistant
        for(short i=1; i<=n; i++)
            if(! jobs[i])
            {
                (job_toggle) ? chef_jobs.push_back(i) : assistant_jobs.push_back(i);
                job_toggle = ! job_toggle;
            }
        
        for(short i : chef_jobs)
            cout << i << " ";
        cout << "\n";
        for(short i : assistant_jobs)
            cout << i << " ";
        cout << "\n";       
    }
}