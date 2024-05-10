#include<stdio.h>

int main()
{
    char ch='A';
    int i=11;
    float f=90.99;
    double d=90.56789;

    char *cp=&ch;
    int *ip=&i;
    float *fp=&f;
    double *dp=&d;

    void *vp=NULL;

    printf("%c\n",*cp);
    printf("%d\n",*ip);
    printf("%f\n",*fp);
    printf("%f\n",*dp);

    vp=&ch;
    printf("%c\n",*(char *)cp);
    vp=&i;
    printf("%d\n",*(int *)ip);
    vp=&f;
    printf("%f\n",*(float *)vp);
    vp=&d;
    printf("%f\n",*(double *)dp);


    return 0;
}
