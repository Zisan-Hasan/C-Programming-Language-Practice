#include <stdio.h>
int main()

{

    float radius,area,circumfence;
    printf("Enter radius:");
    scanf("%f",&radius);
    circumfence = 2*3.1416*radius;
    area =3.1416*radius*radius;
    printf("The circumfence is %f",circumfence);
    printf("The area is %f ", area);

}
