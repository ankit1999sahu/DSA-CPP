//Pass By Value
//Changes will not be reflected in actual parameters
#include<iostream>
#include<stdio.h>
void swap(int x, int y)
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
