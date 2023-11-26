
#include<stdio.h>
struct student{
    int num;
    int ph;
};
int main()
{
    struct student *std, std1;
    std = &std1;
    printf("Enter age:");
    scanf("%d",&std->num);
    printf("Enter phn no:");
    scanf("%d",&std->ph);
    return 0;
}