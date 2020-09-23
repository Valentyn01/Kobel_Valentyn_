#include <stdio.h>
#include <math.h>
int main()
{
float x,t;
printf("введіть точку x=");
scanf("%g",&x);
if(x>0){
t=pow(x,2)+5*x-6;
printf("t="); 
printf("%g", t); 
}
else if(x<=0)
{
    t=fabs(x+cos(x));
    printf("t="); 
    printf("%g", t); 
}
    return 0;
}