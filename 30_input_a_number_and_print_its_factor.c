#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Factors of %d: ",n);
    
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
        }
    }
}