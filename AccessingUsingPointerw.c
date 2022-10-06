#include<stdio.h>
typedef struct
{
    char a;

    char b;
    int c;
}demo;

int main()
{
    demo a;
    printf("%d",sizeof(a));
}
