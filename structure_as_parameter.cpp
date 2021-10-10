#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
//Call By Value Method
/*int area(struct Rectangle r1)
{
  return r1.length * r1.breadth;
}*/
//Call by Refernence Method
/*int area(struct Rectangle &r1)
{
  return r1.length * r1.breadth;
}*/

int main() {
  struct Rectangle r={10,5};
  printf("%d\n",area(r) );
  return 0;
}
