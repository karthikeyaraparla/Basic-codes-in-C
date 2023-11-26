#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,total,average;
    printf("marks gained in sub1:");
    scanf("%d",&sub1);
    printf("marks gained in sub2:");
    scanf("%d",&sub2);
    printf("marks gained in sub3:");
    scanf("%d",&sub3);
    printf("marks gained in sub4:");
    scanf("%d",&sub4);
    printf("marks gained in sub5:");
    scanf("%d",&sub5);
    total = sub1+sub2+sub3+sub4+sub5;
    printf("the total marks gained in all 5 subjects:%d\n",total);
    average = total/5;
    printf("the average of all the 5subjects:%d\n",average);
}