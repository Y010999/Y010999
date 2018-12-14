/*напишите программу находящую обратный по модулю элемент. Иначе говоря
по числам X и N нужно найти такое число Y, что остаток от деления X*Y на N
равняется единице. В программе гарантируется, что все числа - натуральные*/


# include<iostream>
const int c=1000;
int x;
int n;
int y = 0;
using namespace std;
 int main()
{

cin>>x>>n;

for( y;y<c;y++)
{
	
if ((x*y)%n==1)	
{
	
	cout<< y ;
	
	break;
}

	
	
}

if (y==c)
{

cout<< "none" ;
} 








return 0;


}




