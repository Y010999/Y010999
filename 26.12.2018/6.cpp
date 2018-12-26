#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
bool a[n];
a[0]=0;
a[1]=0;
cout<<"0  1";
for (int i = 2 ;i<n;i++)
a[i]=0;

for (int i = 2 ;i<n;i++){

if (a[i]!=1)
{

cout << "  "<<i;
		for (int j=0;i*j<n;j++){
		if (a[j]!=1)
		a[j*i]=1;

}}}



  return 0;
}

