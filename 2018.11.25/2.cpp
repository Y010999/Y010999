#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k, q;
    bool p = 0;
    cin >> n;
    if (n == 1)
    cout<<"0 1 2 3 4 5 6 7 8 9";
    
    if (n % 2 == 1)
    {
        n--;
        p = 1;
    };

    for (int i = pow(10, n/2 - 1); i < pow(10, n/2); i++)
    {
    	
        k = i;
	
        if (p == 1)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << k;
                cout << j;
                for (int h = 0; h < n/2; h++)
                {
                    q = k;
                    cout << (q % 10);
                    q = (q - (q % 10)) / 10;
                };
                cout << '\n';
            }
        }
        else
        {
            cout << k;
            for (int h = 0; h < n/2; h++)
            {
                cout << (k % 10);
                k = (k - (k % 10)) / 10;
            };
            cout << '\n';
        };
    };
    return 0;
}
