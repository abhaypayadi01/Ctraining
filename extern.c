/*#include<stdio.h>
int main()
{
    extern int a;
    printf("%d",a);
}
int a=20;//global declaration*/


#include<stdio.h>
int a;
int main()
{
    extern int a;
    printf("%d",a);
}
