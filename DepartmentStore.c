#include<stdio.h>
typedef struct
{
    int itemno;
    char name[20];
    float price;
}DS;

int main()
{
    int n;
    scanf("%d",&n);
    store s[n];
    printf("Enter the item detail\n");
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].itemno);
        scanf("%d",&s[i].pr_kg);
        scanf("%s",s[i].item);
    }
   int bill=0;
printf("Enter no of item to be added to the list");
    int purchasing_item;
    scanf("%d",&purchasing_item);
    for(int j=0;j<purchasing_item;j++){
    int i,p;
    printf("Enter the item to be added and the quantity in kg \n");
    scanf("%d %d",&i,&p);
    for(int j=0;j<n;j++){
        if(i==s[j].itemno){
            bill=bill+(p*s[j].pr_kg);
        }
    }
   }
}
