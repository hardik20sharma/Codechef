#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(1000001, true);
vector<int> cnt_prime_nos(1000001);

void precompute()
{
    for(int p = 2; p*p <= sieve.size(); p++)
        if(sieve[p])
            for(int i = p*p; i <= sieve.size(); i += p)
                sieve[i] = false;

	for(int i=2; i<cnt_prime_nos.size(); i++)
		if(sieve[i])
			cnt_prime_nos[i] = 1 + cnt_prime_nos[i-1];
		else
			cnt_prime_nos[i] = cnt_prime_nos[i-1];
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	precompute();

	int t, x, y; cin >> t;
	while(t--)
	{
	    cin >> x >> y;
		// (x == 1 || x == 2) ? cout << "Chef\n" : cout << "Divyam\n";		// Solves subtask 1
        // (x <= 2*y) ? cout << "Chef\n" : cout << "Divyam\n";     // Solves subtask 1 and 2

		(y >= cnt_prime_nos[x]) ? cout << "Chef\n" : cout << "Divyam\n";
	}

	return 0;
}