#include <iostream>
#include <cmath>
using namespace std;

bool prime (int l)

{
    int v = 0;
    if (l < 2)
    {
        return 0;
    }
    else
    {
       for (int j = 2; j <= (l/2); j++)
       {
          if ((l % j) == 0)
          {
              v += 1;
              return 0;
              break;
          };
       };
    };
    if (v == 0)
    {
        return 1;
    };
}
/////////////////////////////////////
int main()
{
	int i = 0;
	int b;
	int a=0;
	int j = 0;
	cin>>b;
	while (a<b)
	{
		i++;
	if (prime(i)==1)
	{
		j++;
		if (prime (j)==1)
		{
		a++	;
		};
	};	
	}
	cout<<i;
}
