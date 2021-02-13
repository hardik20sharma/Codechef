#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;
        bool is_start = false, system_working_perfectly = true;

        for(int i=0; i<n; i++)
        {
            string command;
            cin >> command;

            if(command == "start" || command == "restart")
                is_start = true;

            if(command == "stop")
                (is_start) ? is_start = false : system_working_perfectly = false;
        }

        (system_working_perfectly) ? cout << "200\n" : cout << "404\n";
    }
}