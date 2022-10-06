#include<stdio.h>
struct skill_lync
{
    unsigned char f1:1,
                  //reserve1:1;
                  f2:2,
                  //reserve2:2;
                  f3:3
};

int main()
{
    struct skill_lync b1;
    b1.f1=1;
    b1.f2=3;
    b1.f3=8;
    printf("%d %d %d",b1.f1,b1.f2,b1.f3);
}
