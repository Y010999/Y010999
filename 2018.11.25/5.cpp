#include <iostream>
using namespace std;
void pr (int* q,int u,int j)
{
	for (int i = 0;i< u ;i++)
	{
		int p=1;
		int cop = q[i];
		while (q[i]>=1)
		{
			if ((q[i]%10)!=0){
			
			p *=(q[i]%10);
		};
		if (p>j)
		{cout <<cop<<"  ";
		break;
		};
		*(q+i)/=10;
		
		};
	};
}
int main ()
{
	int n = 0;
	int k = 0;
	cin >>n;
	int* a= new int [n];
	for (int i = 0 ; i<n; i++)
	cin>>*(a+i);
	cin>>k;
	pr (a,n,k);
	
	
	return 0;
}
