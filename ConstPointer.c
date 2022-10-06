#include<sdtio.h>
int main()
{
    int a=9;
    const int *ptr=&a; //variable is constant

    //int *const ptr=&a;  //pointer is constant
    printf("%d",++(*ptr));
    printf("%p",++(ptr));
}
