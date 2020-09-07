#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for(int i=0; i<k; i++)
    {
        string s;
        cin >> s;
        if(s == "CLICK")
        {
            int n;
            cin >> n;
            if(find(v.begin(), v.end(), n) == v.end())
                v.push_back(n);
            else
                v.erase(find(v.begin(), v.end(), n));
        }
        else
            v.clear();
        cout << v.size() << "\n";
    }
}
