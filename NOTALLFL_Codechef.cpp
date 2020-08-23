#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, size, k;
    cin >> t;
    while(t--)
    {
        cin >> size >> k;
        vector<int> arr(size);

        for(int i=0; i<size; i++)
            cin >> arr[i];
        
        map <int, int> frequency;
        int right = 0, left = 0, result = 0, distinct_flavors = 0;

        while(right < size)
        {
            if( frequency[ arr[right] ] == 0 && distinct_flavors == k-1 )
            {
                frequency[ arr[left] ]--;
                if( frequency[ arr[left] ] == 0 )
                    distinct_flavors--;
                left++;
                continue;
            }
            
            frequency[ arr[right] ]++;
            
            if( frequency[ arr[right] ] == 1)
                distinct_flavors++;
            
            right++;
            result = max(result, right-left);
        }

        cout << result << "\n";
    }
}