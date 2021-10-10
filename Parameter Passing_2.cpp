//Call by Reference
#include<iostream>
#include<stdio.h>
void swap(int &x, int &y)//&x is referncing a and &y is referncing b
{
	int temp;
	temp=x;
	x=y;
	y=temp;

}
int main()
{
	int a=10,b=20;
	swap(a,b);
	std::cout<<a<<", "<<b;
    //printf("%d,%d",a,b);
	return 0;
}
