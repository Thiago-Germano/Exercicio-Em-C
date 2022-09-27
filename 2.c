

#include <stdio.h>

int main()
{
    float temperatura,Celsius,Kelvin,calculo;
    printf("digite a temperatura que voce deseja: ");
    scanf("%f",&temperatura);

    Celsius=((temperatura-32)*5)/9;
    Kelvin=  273.15 + Celsius;
    printf("Fahrenheit %.3f,Celsius %.2f,Kelvin %.3f",temperatura,Celsius,Kelvin);

}
