#include <iostream>

using namespace std;

int main()
{
    int n=1;
    int  p = 1;
    cin >> n;
    n+=5;
    bool* a = new bool[n+1];
    a[0] = a[1] = 0;
    for (int i = 2; i <= n+1; i++)
        a[i] = 1;
    for (int i = 2; i <= 2*n+1; i++)
        if (a[i])
            for (int j = i+i; j <= 2*n+1; j += i)
                a[j] = 0;
    for (int i = 2; i <= n+1; i++)
        if (a[i])
            p *= i;
    cout << p;
    return 0;
}
