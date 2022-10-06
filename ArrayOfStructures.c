/*#include<stdio.h>
typedef struct
{
    int empid;
    char name[50];
}empDB;

int main()
{
    empDB emp[3]={{1001,"Chai"},
                  {1002,"Magna"}
                 };
    printf("%d\n %s\n",emp[0].empid,emp[0].name);
}*/

#include<stdio.h>
typedef struct
{
    int empid;
    char name[50];
}empDB;

int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    empDB emp[n];
    for(int i=0;i<n;i++)
    {
        printf("enter %d emp code",i+1);
        scanf("%d",&emp[i].empid);
        printf("enter %d name",i+1);
        scanf("%s",emp[i].name);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",emp[i].empid);
        printf("%s\n",emp[i].name);
    }


    //printf("%d\n",emp[1].empid);
    //printf("%d\n",emp[2].empid);
}

