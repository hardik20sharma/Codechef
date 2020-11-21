#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
	while(t--)
	{
	    string m, w;
	    cin >> m >> w;

	    if( m.size() < w.size() )
	    {  
            int j = 0;
	        for(int i=0; w[i]!='\0'; i++)
	            if(m[j] == w[i])
	                j++;
	            else if(m[j] == '\0')
	                break;

	        (m[j] == '\0') ? cout << "YES\n" : cout << "NO\n";
	    }

	    else if( m.size() > w.size() )
	    {
	        int j = 0;
	        for(int i=0; m[i]!='\0'; i++)
	            if(w[j] == m[i])
	                j++;
	            else if(w[j] == '\0')
	                break;

	        (w[j] == '\0') ? cout << "YES\n" : cout << "NO\n";
	    }

	    else
	        (w == m) ? cout << "YES\n" : cout << "NO\n";
	}
}