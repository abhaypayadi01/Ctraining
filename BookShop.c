#include<stdio.h>
typedef struct
{
    char author[20];
    char title[20];
    int price;
    char publisher[20];
    int edition;
}bs;

int main()
{
    char user_title[20];
    char user_author[20];
    bs b[3]={{"chaitra","magna",30,"CBA",2001},
            {"raji","jss",30,"fed",2002},
            {"gayu","rns",30,"IHG",2000}};

    printf("enter the title");
    scanf("%s",&user_title);

    //printf("%s",user_title);
    //printf("enter the author");
    //scanf("%s",&user_author);
    for(int i=0;i<3;i++)
    {
        if(strcmp(user_title,b[i].title))
        {
               printf("%s\n",b[i].title);
               printf("%s\n",b[i].author);
               return 0;
        }
    }
    printf("not found");


}
