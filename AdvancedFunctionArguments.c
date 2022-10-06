#include<stdio.h>
float Gain(float);
void func(float(*funptr)(float));
int main()
{
    float (*fp)(float);
    fp=Gain;
    float result;
    result=Gain(5);
    printf("\n result is %f",result);
    result=(*fp)(10);
    printf("\n result is %f",result);
    func(fp);
}

float Gain(float a)
{
    return a*a;

}

void func(float(*funptr)(float))
{
    float func_result;
    printf("\n function Func() is called:");
    func_result=(*funptr)(12);
    printf("\n %f",func_result);
}
