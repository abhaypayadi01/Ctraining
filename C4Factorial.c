#include<stdio.h>
int main(int argc, char *argv[])
{
    int res=fact(argv[1]);
}

int fact(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
        return fact(a*a-1);
}
