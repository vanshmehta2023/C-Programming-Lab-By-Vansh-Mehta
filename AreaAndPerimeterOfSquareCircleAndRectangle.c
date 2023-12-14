#include<stdio.h>
void main()
{
    int l,b;
    printf("Enter the value of length of rectangle:");
    scanf("%d",&l);
    printf("Enter the value of breadth of rectangle:");
    scanf("%d",&b);
    int side;
    printf("Enter the value of side of a square:");
    scanf("%d",&side);
    float radius;
    printf("Enter the radius of circle:");
    scanf("%f",&radius);
    printf("\nPerimeter of circle:%f",2*3.14*radius);
    printf("\nArea of circle:%f",3.14*radius*radius);
    printf("\nPerimeter of square:%d",4*side);
    printf("\nArea of square:%d",side*side);
    printf("\nPerimeter of rectangle:%d",2*(l+b));
    printf("\nArea of rectangle:%d",l*b);
}