#include <stdio.h>

int main()
{
   char c;
   printf("The letter is :") ;
   scanf("%c",&c);
   int ascci = c;
   printf("Previous letter's ascci is %d %c\n",ascci-1,ascci-1);
   printf("Next letter's ascci is %d %c\n",ascci+1,ascci+1);
}

