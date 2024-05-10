#include<stdio.h>

int main()
{
    int standard=0;
    printf("Enter your standard : \n");
    scanf("%d",&standard);

    if(standard==1)
    {
        printf("your exam is at 7AM");
    }
    else if(standard==2)
    {
        printf("your exam is at 8AM");
    }
     else if(standard==3)
    {
        printf("your exam is at 9AM");
    }
    else if(standard==4)
    {
        printf("your exam is at 10AM");
    }
    else
    {
        printf("wrong selection");

    }




    return 0;
}