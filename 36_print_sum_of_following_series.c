//sum of: 1+(1/2)+(1/3)+(1/4).......(1/n)
#include<stdio.h>
int main()
{
    int n;
    float i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum+=1/i;
    }
    printf("Sum of following series: %0.2f",sum);
}