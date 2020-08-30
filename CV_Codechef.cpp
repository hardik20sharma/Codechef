#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt = 0;
        string str;
        cin >> n >> str;

        for(int i=0; i<n-1; i++)
        {
            bool cnd1 = (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u');
            bool cnd2 = (str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u');
            if(cnd1 && cnd2)
                cnt++;
        }
        cout << cnt << "\n";
    }
}
