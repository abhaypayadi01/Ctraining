#include<stdio.h>
void mul(int a,int b);
int main()
{
    void(*point1)(int,int);
    point1=mul;
   // mul(2,3);
   (*point1)(2,3);
    return 0;

}

void mul(int a,int b)
{

    printf("%d",a*b);
}
