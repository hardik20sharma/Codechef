#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        double sum = 0;
        cin >> n >> k;

        vector<double> vec(n);
        for(int i=0; i<n; i++)
            cin >> vec[i];
        
        sort(vec.begin(), vec.end());

        for(int i=k; i<n-k; i++)
            sum += vec[i];
        
        cout << std::fixed << std::setprecision(6) << sum/(n - 2*k) << "\n";
    }
}