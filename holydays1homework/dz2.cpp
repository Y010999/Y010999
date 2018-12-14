#include <iostream>

using namespace std;

int main()
{
    int a, b, c = 0;

    cin >> a;
    b = a % 10;

    while (b >= 1)
    {
        if (b % 2 == 1)
    {   
		c += b;
	};
        a /= 10;
        b = a % 10;
    };

    cout << c;
}
