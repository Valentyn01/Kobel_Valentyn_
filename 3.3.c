#include <stdio.h>
#include <math.h>

int main()
{
    int t,z,y,a,b;
    printf("z=");
    scanf("%d",&z);
    printf("y=");
    scanf("%d",&y);
    b=z-2*y;
    if(b!=0){
        a=3*(y/b);
        if(a>0){
            t=sqrt(a)-y*z;
            printf("%d",t); 
        }
        else
        {
            printf("Помилка"); 
        }
    }
    else
    {
       printf("Помилка"); 
    }
    return 0;
}
