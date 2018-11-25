#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
bool a[n];
a[0]=0;
a[1]=0;
for (int i = 2 ;i<n;i++)
{
	a[i]=0;
}
for (int i = 2 ;i<n;i++)
{	if (a[i]==1)
{
	cout<<i<<"  ";

}else
{

	
	
		
		for (int j=0;i*j<n;j++)
		a[j*i]=1;
	}
}
/*for (int i =0 ;i<n;i++)
{
	if (a[i]==0)
	cout<<i;
}

*/

  return 0;
}

