#include <iostream>
using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	int a[n + 1];
	for (int i = 0; i < n + 1; i++)
	{
		cin >> a[i];
	};

	int b = a[n];
	for (int i = n - 1; i >= 1; i--)
		b = a[i] + b * x;
	cout << a[0] + b * x;
	return 0;
}
