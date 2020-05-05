#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, laddu = 0;
        string nationality;
        cin >> n >> nationality;
        while(n--)
        {
            string activity;
            cin >> activity;
            if(activity == "CONTEST_WON")
            {
                int temp;
                cin >> temp;
                (temp < 20) ? laddu += 320 - temp : laddu += 300;
            }

            else if(activity == "TOP_CONTRIBUTOR")
                laddu += 300;
            
            else if(activity == "BUG_FOUND")
            {
                int temp;
                cin >> temp;
                laddu += temp;
            }

            else
                laddu += 50;
        }

        (nationality == "INDIAN") ? cout << laddu / 200 << "\n" : cout << laddu / 400 << "\n";
    }
}