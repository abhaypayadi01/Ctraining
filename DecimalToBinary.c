#include<stdio.h>
int main()
{
    int decimal=0;
    printf("enter decimal number\n");
    scanf("%d",&decimal);
    //int decimal=16;
    int n=decimal;
    int temp=1;
    int binary=0;
    int rem=0;

    while(decimal!=0)
    {
        rem=decimal%2;
        decimal=decimal/2;
        binary=binary+rem*temp;
        temp=temp*10;
    }
    printf("The binary equivalent of %d is %d",n,binary);
}
