#include<stdio.h>
int FactNum(int n);
int main()
{
    int num;
    printf("enter");
    scanf("%d",&num);
    int res=FactNum(num);
    printf("%d",res);
    return 0;
}


int FactNum(int n)
{
    if(n!=1)
    {
        return n*FactNum(n-1);
    }
    else
        return n;
}
