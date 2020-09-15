#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin >> n >> s;
        int a = 0, b = 0, cnt_a = 0, cnt_b = 0;
        bool found = false;
        for(int i = 0; i < 2*n; i++)
        {
            if(i % 2 == 0)
            {	
                cnt_a++;
                if(s[i]=='1')
                    a++;	
            }
            else
            {
                cnt_b++;
                if(s[i]=='1')
                    b++;
            }
            
            if(a - b > n - cnt_b)
            {
                cout << i + 1 << endl;
                found = true;
                break;
            }
            if(b - a > n - cnt_a)
            {
                cout << i + 1 << endl;
                found = true;
                break;
            }	
        }
        if(!found)
            cout << 2*n << endl;
    }
}