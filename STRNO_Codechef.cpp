#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;

void power(int number, map<int, int> &prime_numbers)
{
    int i=2;
    int limit = sqrt(number);

    while(i <= limit)
        if(number % i != 0)
            i++;
       else
        {
            prime_numbers[i]++;
            number /= i;
        }

    if(number != 1)
        prime_numbers[number]++;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, k;
        scanf("%d %d", &x, &k);

        map<int, int> prime_numbers;

        power(x, prime_numbers);
        map<int, int>::iterator it = prime_numbers.begin();

        int sum = 0;
        for (it = prime_numbers.begin(); it != prime_numbers.end(); it++)
            sum += it->second;

        (sum >= k) ? cout << "1\n" : cout << "0\n";
    }
}