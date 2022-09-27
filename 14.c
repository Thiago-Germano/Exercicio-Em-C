
#include <stdio.h>

int main()
{
    float Celsius;
    printf("Fahrenheit ||   Celsius\n");
    printf("-----------||-------------\n");
    for(float i = 40;i <=75; i++){
       Celsius=((i-32)*5)/9;
       printf("%.2f      ||     %.2f\n",i,Celsius);



    }



}
