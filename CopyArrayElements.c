#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements\n");
    scanf("%d",&n);
    int arr[n];
    int t;
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int j=n-1;
    int rev[n];
    for(int i=0;i<n;i++)
    {
        rev[j]=arr[i];
        j--;
    }

    printf("elements copied to another array in reverse order\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",rev[i]);
    }
}
