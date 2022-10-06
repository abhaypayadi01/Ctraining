#include<stdio.h>
//void displayNumbers(int *num)
void displayNumbers(int num[i][j])
{
    printf("displaying\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            //printf("%d\n",*num++);
            printf("%d\n",num[i][j]);
        }
    }
}
int main()
{
    int n[2][2];
    printf("enter 4 numbers");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    //int *ptr=n;
    displayNumbers(n);
}
