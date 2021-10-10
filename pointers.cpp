#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
/*int main()
{
	//int a[]={10,20,30,40};
	int *p;//Pointer
	//p=&a;Address of a
	//p=a;// No &a as a is an array
	//p=(int *)malloc(5*sizeof(int));//Array inside heap in c
	p=new int[5];//Array inside heap in c++
	for(int i=0;i<5;i++)
	{
		cin>>p[i];
	}
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl;
	}
	delete [ ] p;// Deletetion of memory in C++
	//free(p);//Deletetion of memory in C
}*/
struct rectangle
{
	int length;
	int breadth;
};
int main()
{
	int *p1;
	char *p2;
	float *p3;
	double *p4;
	struct rectangle *p5;
	
	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p2)<<endl;
	cout<<sizeof(p3)<<endl;
	cout<<sizeof(p4)<<endl;
	cout<<sizeof(p5)<<endl;
}
