#include<iostream>
#include<stdlib.h>>
using namespace std;
/* Refernece Example
int main()
{
	int a=10;
	int &r=a;// Reference is just another name of the variable declared. So it does not consume memory.
	cout<<a<<endl<<r<<endl;
}*/

//Pointer to structure example
struct rectangle
{
	int length;
	int breadth;
	
};
 int main()
 {/*
 rectangle r={10,5};//In c++ struct keyword is not necessary while initialisation
 cout<<r.length<<endl;
 cout<<r.breadth<<endl;
 
 rectangle *p=&r;
 */
 //Create an obect of Rectangle
 struct rectangle *p;
 //p=(struct rectangle *)malloc(sizeof(struct rectangle));//In c
 p=new rectangle;//In c++
 p->length=15;
 p->breadth=7;
 cout<<p->length<<endl;
 cout<<p->breadth<<endl;
 
 return 0;	
 }
