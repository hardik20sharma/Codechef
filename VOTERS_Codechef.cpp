#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n1, n2, n3, temp;
    set<int> s1, s2, s3, s;

    cin >> n1 >> n2 >> n3;

    while (n1--)    { cin >> temp; s1.insert(temp); }
    while (n2--)    { cin >> temp; s2.insert(temp); }
    while (n3--)    { cin >> temp; s3.insert(temp); }

    set_intersection( s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s, s.begin()) );
    set_intersection( s2.begin(), s2.end(), s3.begin(), s3.end(), inserter(s, s.begin()) );
    set_intersection( s3.begin(), s3.end(), s1.begin(), s1.end(), inserter(s, s.begin()) );

    cout << s.size() << "\n";
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it << "\n";
}
