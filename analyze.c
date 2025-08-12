#include <stdio.h>

int main()
{
  int x = 2,y,z = 4;
  //y = x++ + ++x;
  //y = ++x + ++x;
 // y = ++x + ++x + ++x;
 //y = x>z;
// y =x>z?x:z;
 y = x&z;

  printf("%d\n",y);

}
