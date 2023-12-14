#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,p,q,sum,sq;
    printf("Enter the Value of x1:");
    scanf("%f",&x1);
    printf("Enter the Value of x2:");
    scanf("%f",&x2);
    printf("Enter the Value of y1:");
    scanf("%f",&y1);
    printf("Enter the Value of y2:");
    scanf("%f",&y2);
    p=(x2-x1)*(x2-x1);
    q=(y2-y1)*(y2-y1);
    sum=p+q;
    sq=sqrt(sum);
    printf("Answer is: %.2f", sq);
    return 0;
}