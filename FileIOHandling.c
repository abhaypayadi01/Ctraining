#include<stdio.h>
#include<stdlib.h>
/*int main()
{
    FILE *f;
    f=fopen("C:\\Users\\chaiyv\\Desktop\\FileCreated.txt","w");
    if(f==NULL)
    {
        printf("Error!");
    }
    else
    {
        fprintf(f,"%s\n","First program");
        fputc('A',f);
        fputs("\nDemonstration for fputs function",f);
    }

    fclose(f);
}*/


//ReadMode
    int main()
{

    FILE *F;
    F=fopen("C:\\Users\\chaiyv\\Desktop\\FileCreated.txt","r");
    char ch;
    char str[100];
    fgets(str,20,F);
    printf("%s",str);
    /*while(1)
    {
        ch=fgetc(F);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }*/

    fclose(F);

}
