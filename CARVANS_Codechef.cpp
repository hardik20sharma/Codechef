#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n], count = 1;

        cin >> arr[0];
        if(n==1)
        {
            cout << count << "\n";
            continue;
        }

        for(int i=1; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i-1] > arr[i])
                count++;
            else
                arr[i] = arr[i-1];
        }

        cout << count << "\n";
    }
}