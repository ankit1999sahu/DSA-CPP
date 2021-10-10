#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle
{
    int length;//4 Bytes for int in 32 bit OS and 8 Byte for 64 bit OS
    int breadth;
    char x;//Char will use 1 Byte but due to Padding of memory in structure it will use 4 Bytes as int
    //Total memory will 12 Bytes
}; //r1 can also be initialised here so it will be called initialisation with declaration
int main()
{
    struct rectangle r1={10,15};//r1 initialisation
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    return 0;
}
