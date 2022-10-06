/*#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    //printf("%d",arr[9]);
    printf("%d",sizeof(arr)/sizeof(arr[0])); //to find the no of elements in the array
}*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements");
    scanf("%d",&n);
    int arr[n];
    int *p;
    p=arr;
    printf("enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }
}
