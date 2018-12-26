#include <iostream>
#include<cmath>
using namespace std;

int main()
{

int num;
cin>>num;
int big;
for(;;)
{
	if (num==0)
	break;
	big=sqrt(num);
	num=num-big*big;
	cout<<big<<"  ";
}

}



