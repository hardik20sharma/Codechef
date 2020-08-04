#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);    cin.tie(NULL);      cout.tie(NULL);

    map<string, short> days;
	    days["monday"] = 1;     days["tuesday"] = 2;    days["wednesday"] = 3;      days["thursday"] = 4;
	    days["friday"] = 5;     days["saturday"] = 6;   days["sunday"] = 7;

	short t, l , r;
    cin >> t;
    while(t--)
	{
        string s, e;
        cin >> s >> e >> l >> r;
	    
        short duration = days[e] - days[s] + 1, count = 0, i;

        for(i=duration; i<=r; i+=7)
	    {
	        if(i>=l && i<=r)
                count++;
	        if(count > 1)
                break;
	    }

	    if(count==0)
            cout << "impossible\n";
	    else if(count==1)
            cout << i-7 << "\n";
	    else
            cout << "many\n";
	}
}