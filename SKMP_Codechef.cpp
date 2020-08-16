#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    short t;
    cin >> t;
    while(t--)
    {
		string s, p;
		cin >> s >> p;

        map <char, int> p_letters, s_letters;
        for(int i=0; i<s.length(); i++)
			s_letters[s[i]]++;

        for(int i=0; i < p.length(); i++)
			p_letters[p[i]]++;

        vector <char> v;
        for(int i=0; i < s.length(); i++)
			if(s_letters[s[i]] > p_letters[s[i]])
            {
				s_letters[s[i]]--;
				v.push_back(s[i]);
            }

		char ch;
		for(int i=0; i < p.length(); i++)
			if(p[i] != p[0])
            {
				ch = p[i];
				break;
			}

		string s1, s2, sx;
		for(int i=0; i < v.size(); i++)
			if(v[i] < p[0])	
				s1 += v[i];
			else if(v[i] > p[0])
				s2 += v[i];
			else
				sx += v[i];

		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());

        string ans;
		(sx[0] <= ch) ? ans = s1 + sx + p + s2 : ans = s1 + p + sx + s2;

        cout << ans << "\n";
    }
}