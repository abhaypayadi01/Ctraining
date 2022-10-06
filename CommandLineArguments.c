#include<stdio.h>
int main(int argc, char *argv[])
{
    printf("\n name if the program is %s",argv[0]);
    if(argc<2)
    {
        printf("\n no arguments passed through command line");
    }
    else
        printf("\n first argument is : %s",argv[1]);
}
