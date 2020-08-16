#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, pc, pr, chef_digits, rick_digits;;
    cin >> t;
    while(t--)
    {   
        cin >> pc >> pr;

        chef_digits = pc/9;
        rick_digits = pr/9;

        if(pc % 9)
            chef_digits++;
        
        if(pr % 9)
            rick_digits++;

        (chef_digits < rick_digits) ? cout << "0 " << chef_digits << "\n" : cout << "1 " << rick_digits << "\n";
    }
}