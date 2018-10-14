/*Напишите программу проверяющую является ли число составным. В
программе гарантируется, что число - натуральное
*/

# include<iostream>

int a = 0;
long long int num;// number
using namespace std;

 int main()
{

cin>> num;
if (num  == 1 )
{

	cout<<"unit";
	a = 1;
} else {
for (int i =2;i<num;i++)
{

	if (num % i == 0 ){
	
	cout << "composite";
	a = 1;
	break;
	 
}
	
	
	
} 
}
	if (a==0)
	cout << "prime";
}




