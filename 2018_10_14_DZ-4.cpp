/*
Напишите программу находящую в массиве сумму элементов делящихся либо
на 72 либо на 27(не вместе).

*/



#include <iostream>

using namespace std;
int main ()
{
 int n = 0;
 int s = 0;
    cin>> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
		cin>> a[i];
    for (int j = 0; j < n; j++)
    {
	int w = a[j];
        if ((w % 27 == 0) ^ ( w % 72 == 0))
        s = s + w ;
        
    };
    cout<< s;
    
}

