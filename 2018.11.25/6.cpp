#include <iostream>

using namespace std;
int main()
{
  int n;
  cin>>n;
bool a[n];


for (int i = 2 ;i<n;i++)
{
	a[i]=1;
}
a[0]=a[1]=1;
for (int i = 1 ;i<n;i++)
{
for (int j = 2 ;i*j<n;i++)
{

	if (a[i]==0)

{
}else
{


	if ((a[i]==1)&&(a[j]==1))
	{
	
	int k = i*j-2;
	if((a[k]==1)&&(k>0))
	{
	
	
	cout<<k;
}
	for (int q=0;k*q<n;j++)
		if (a[q]==0)
		{
			a[q*k]==0;
		}
		
}


}

}
}
  return 0;
}

