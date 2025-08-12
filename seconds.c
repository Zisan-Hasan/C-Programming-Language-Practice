#include <Stdio.h>
int main()
{
    int hours,minutes,seconds,x,y,second;
    printf("Enter the hours :");
    scanf("%d",&hours);
    x = hours*60*60;
    printf("Enter the minutes :");
    scanf("%d",&minutes);
    y = minutes*60;
    printf("Enter the seconds :");
    scanf("%d",&seconds);
    second = x + y + seconds;
    printf("Total seconds = %d\n");

}
