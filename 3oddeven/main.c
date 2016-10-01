#include <stdio.h>
void main()
{
    int a;
    printf("Enter a no.");
    scanf("%d",&a);
    if((a%2)==0)
        printf("The given number is even.");
    else
        if((a%2)==1)
        printf("The given number is odd.");
    else
        printf("Wrong input");
}
