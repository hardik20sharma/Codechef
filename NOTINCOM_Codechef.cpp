#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<m; i++)
            cin >> b[i];

        sort(a, a+n);
        sort(b, b+m);

        int cnt=0, i=0, j=0;
        while(i<n && j<m)
        {
            if(a[i] < b[j])
                i++;
            else if(a[i] > b[j])
                j++;
            else
            {
                i++;
                j++;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}