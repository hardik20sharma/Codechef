// Finding the maximum product subarray
#include<bits/stdc++.h>
using namespace std;

int max_product_subarray(vector<int> a)
{
    int current_max_product = a[0], previous_max_product = a[0], current_min_product = a[0], previous_min_product = a[0], ans = a[0];
    
    for(int i = 1; i < a.size(); i++)
    {
        current_max_product = max( max(previous_max_product * a[i], previous_min_product * a[i]), a[i]);
        current_min_product = min( min(previous_max_product * a[i], previous_min_product * a[i]), a[i]);
        
        ans = max(ans, current_max_product);
        
        previous_max_product = current_max_product;
        previous_min_product = current_min_product;
    }

    return ans;
}

int main()
{
    vector<int> a{6, -3, -10, 0, 2};
    cout << max_product_subarray(a);
}
