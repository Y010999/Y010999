#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool* A = new bool[2*n+2];
    A[0] = A[1] = 0;
    for (int i = 2; i <= 2*n+2; i++)
        A[i] = 1;
    for (int i = 2; i <= 2*n+2; i++)
        if (A[i])
            for (int j = i+i; j <= 2*n+2; j += i)
                A[j] = 0;
    for (int i = 2; i <= n; i++)
        if ((A[i]) && (A[2*i+1]))
            cout << i << '\n';
    return 0;
}
