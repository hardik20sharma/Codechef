#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;

    while(t--)
    {
        cin >> n;

        vector<pair<char, string>> word(n);
        unordered_set<string> word_set;
        unordered_set<char> prefix;
        unordered_set<string> suffix;
        word_set.reserve(n);

        for(int i=0; i<n; i++)
        {
            cin >> word[i].first >> word[i].second;
            word_set.insert( word[i].first + word[i].second );
            prefix.insert(word[i].first);
            suffix.insert(word[i].second);
        }

        if(prefix.size() == 1 || suffix.size() == 1)
        { cout << "0\n"; continue; }

        int res = 0;
        sort(word.begin(), word.end());

        for(int i=0; i<n-1; i++)
            for(int j=n-1; i<j; j--)
            {
                if(word[i].first == word[j].first)
                    break;

                string s1 = word[i].first + word[j].second;
                string s2 = word[j].first + word[i].second;

                if(word_set.count(s1) == 1 || word_set.count(s2) == 1)
                    continue;
                res += 2;
            }

        cout << res << "\n";
    }
}

/*

hardik hard sharma - funny words - ans is 4
aba ab ba bab - funny words -- ans is 8
aba ab ba bab cab - funny words - ans is 12
cat bat cab dab - funny words -- ans is 2

prefix(total 3): a-{ba, b}  b-{a, ab}  c-{ab}



    unordered_set<string> words(n);
    for(int i=0; i<n; i++)
    {
        string s; cin >> s;
        words.insert(s);
    }

    unordered_set<string> prefix, suffix;
    for(auto it = words.begin(); it != words.end(); it++)
    {
        prefix.insert(it->substr(0, 1));
        suffix.insert(it->substr(1, it->length()));
    }

    unordered_set<string> available_words;
    for(auto it = prefix.begin(); it != prefix.end(); it++)
        for(auto it1 = suffix.begin(); it1 != suffix.end(); it1++)
            if(words.find(*it + *it1) == words.end())
                available_words.insert(*it + *it1);

    int res = 0;
    for(auto it = available_words.begin(); it != available_words.end(); it++)
        for(auto it1 = available_words.begin(); it1 != available_words.end(); it1++)
            if(it != it1)
                if(it->substr(0, 1) != it1->substr(0, 1))
                    res++;

    cout << res << "\n";



import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner scan = new Scanner(System.in);

        int t, n;
        t = scan.nextInt();
        while(t-- != 0)
        {
            n = scan.nextInt();
            ArrayList<String> word = new ArrayList();
            HashSet<String> set = new HashSet();

            for(int i=0; i<n; i++)
            {
                String s = scan.next();
                word.add(s);
                set.add(s);
            }

            int res = 0;
            for(int i=0; i<n; i++)
                for(int j=i+1; j<n; j++)
                {
                    if(word.get(i).charAt(0) == word.get(j).charAt(0))
                        continue;

                    String s1 = word.get(i).charAt(0) + word.get(j).substring(1, word.get(j).length());
                    String s2 = word.get(j).charAt(0) + word.get(i).substring(1, word.get(i).length());

                    if(set.contains(s1) || set.contains(s2))
                        continue;
                    res += 2;
                }

            System.out.println(res);
        }
        scan.close();
	}
}

*/