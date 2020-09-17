#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string num;
        cin >> num;

        int minimum = INT_MAX;
        for(int i=0; i<num.length(); i++)
            minimum = min(minimum, stoi(num.substr(0,i) + num.substr(i+1, num.length())));
        cout << minimum << "\n";
    }
}