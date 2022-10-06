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
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
            odd++;
    }

    printf("number of even numbers are %d\n",even);
    printf("number of odd numbers are %d\n",odd);

}
