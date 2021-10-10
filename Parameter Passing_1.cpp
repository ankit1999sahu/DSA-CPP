//Call By Address
//The Address of actual parameters are passed to formal parameters
//and formal parameters must be pointers
//Any changes done inside formal parameters will be reflected to actual parameters
#include<iostream>
#include<stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;//dereferencing
	*y=temp;

}
int main()
{
	int a=10,b=20;
	swap(&a,&b);
	std::cout<<a<<", "<<b;
    //printf("%d,%d",a,b);
	return 0;
}
