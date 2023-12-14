#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number you want the factorial for = ");
    scanf("%d",&n);
    int fact=1,i;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial is %d\n", fact);
    return 0;
}