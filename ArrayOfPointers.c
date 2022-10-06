#include<stdio.h>
int main()
{
    int *arr[4];
    int i=31,j=9,k=7,l=71,m=55;
    arr[0]=&i;
    arr[1]=&j;
    arr[2]=&k;
    arr[3]=&l;
    arr[4]=&m;
    for(int m=0;m<4;m++)
    {
        printf("%d\n",*(arr[m]));
    }
l}
