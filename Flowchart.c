#include <stdio.h>

int main()

{
    float hour,payrate,grosspay;
    printf("How many hour did you worked ? ");
    scanf("%f",&hour);
    printf("How much do you get paid per hour");
    scanf("%f",&payrate);
    grosspay = hour * payrate;
    printf("your gross amount %.2f\n",grosspay);
}

