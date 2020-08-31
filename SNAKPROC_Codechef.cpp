#include<bits/stdc++.h>
using namespace std;

bool func(int n, string str)
{
    int step = 0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='H')
            step++;
        else if(str[i]=='T')
            step--;
        
        if(step !=0 && step != 1)
            return false;
    }
    return !step;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> n >> str;
        func(n, str) ? cout << "Valid\n" : cout << "Invalid\n";
    }
}
