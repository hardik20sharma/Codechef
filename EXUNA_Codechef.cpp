#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n;
    cin >> t;
    while(t--)
    {
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++)
	    	cin >> a[i];
		sort(a, a+n);
		cout << a[0] << "\n";
	}
}