/*
Ќапишите функции min, max, avg, med, процедуру swap принимающие в себ€
три вещественных аргумента и программу с примером из использовани€. min -
находит минимальное из трех значений, max - максимальное, avg - среднее
арифметическое, med - медианное (гуглим, что это такое). swap - переставл€ет
значени€ по кругу ( первое во второе, второе в третье, третье в первое).
*/



#include <iostream>
using namespace std;

float a1;
float b1;
float c1;


float min(float a,float b,float c)  
{
	
	float min;
	
	 if ((a <= b)&&(a<=c)) {
        min = a;
	} else {
    
    if ((b <= a)&&(b<=c)) {
        min = b;
    } else {
    	min = c;
    }
	}
    return min;
}

float max (float a,float b, float c)
{
	
		float max;
	
	 if ((a >= b)&&(a>=c)) {
        max = a;
	} else {
    
    if ((b >= a)&&(b>=c)) {
        max = b;
    } else {
    	max = c;
    }
	}
    return max;
	
	
}

float avg (float a,float b, float c) 
{
	
	return (a+b+c)/3;
	
}

float med (float a,float b, float c) 
{
		float med;
	
	 if (((a >= b)&&(a<=c))||((a<=b)&&(a>=c))) {
        med = a;
	} else {
    
    if (((b >= a)&&(b<=c))||((b<=a)&&(b>=c))) {
        med = b;
    } else {
    	med = c;
    }
	}
    return med;
	
}

void swap (float* a,float* b,float* c)
{
	float i = *b;
	float j= *c;
	float k = *a;
	*b=k;
	*c=i;
	*a=j;
	return;
}

int main()
{
    cin >>a1>>b1>>c1;
    float* pa1 = &a1;
    float* pb1 = &b1;
    float* pc1 = &c1;
    cout<<min (a1,b1,c1)<<"\n";
    cout<<max (a1,b1,c1)<<"\n";
    cout<<avg (a1,b1,c1)<<"\n";
    cout<<med (a1,b1,c1)<<"\n";
    swap (pa1,pb1,pc1);
    cout<<*pa1<<*pb1<<*pc1<<"\n";
    
    
    return 0;
}

