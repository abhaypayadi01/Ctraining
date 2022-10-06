#include<stdio.h>
int main()
{
    int n=5;
    int arr[5]={4,90,6,1,2};
    int ele;
    int count=0;
    printf("enter a number to search\n");
    scanf("%d",&ele);
    int i;
    /*for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
           count=1;
            break;
        }
    }
    if(count == 1)
    {
        printf("%d element is found at %d",ele,i+1);
    }
    else
        printf("%d not found",ele);*/


   /* for(int i=0;i<n;i++)
    {
        ele==arr[i]?printf("element found\n"):printf("not found\n");
    }*/


    for(int i=0;i<n;i++)
    {
        if(ele==arr[i])
        {
            printf("element found at %d",i+1);
            return 0;
        }

    }
    printf("not found");
}
