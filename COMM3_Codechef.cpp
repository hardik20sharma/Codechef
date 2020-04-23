#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int max_limit, x1, x2, x3, y1, y2, y3;
        cin >> max_limit;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        max_limit = max_limit * max_limit;
        int dist1 = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
        int dist2 = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
        int dist3 = (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);

        if((dist1 <= max_limit && dist2 <= max_limit) || (dist2 <= max_limit && dist3 <= max_limit) || (dist1 <= max_limit && dist3 <= max_limit))
            cout << "yes\n";
        else
            cout << "no\n";
        
    }
}