#include<stdio.h>
int areaoftriangle(int a,int b){
int area = 0.5*a*b;
printf("The area of triangle is% d",area);
}
int areaofrectangle(int a,int b){
int area = a*b;
printf("The area of a rectangle is %d",area);
}
int areaofsquare(int a){
int area = a*a;
printf("The area of a square is %d",area);
}
int areaofcircle(int r){
float pi = 3.1416;
int area = pi * r * r;
printf("The area of a circle is %d",area);
}
int main()
{
    int a,b,n;
    char ch;
    printf("press 't' for the area of a triangle\npress 'r' for the area of a rectangle\npress 's' for the area of a square\npress 'c' for the area of a circle\n");
    scanf("%c",&ch);

    if(ch=='t'){
        printf("Enter a:");
        scanf("%d",&a);
        printf("Enter b:");
        scanf("%d",&b);
        areaoftriangle(a,b);
    }
    else if(ch=='r'){
        printf("Enter a:");
            scanf("%d",&a);
            printf("Enter b:");
            scanf("%d",&b);
            areaofrectangle(a,b);
    }
    else if(ch=='s'){
        printf("Enter a:");
        scanf("%d",&a);
        areaofsquare(a);
    }
    else if(ch=='c'){
        printf("Enter n:");
        scanf("%d",&n);
        areaofcircle(n);
    }
    else{
        printf("Invalid Input");
    }

}
