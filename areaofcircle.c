#include <stdio.h>
int main()
#define PI 3.14159
{
    float area,radius;
    printf("enter the radius of the circle:");
    scanf("%f",&radius);
    area = PI*radius*radius;
    printf("the required area of circle:%f",area);
    return 0;
}