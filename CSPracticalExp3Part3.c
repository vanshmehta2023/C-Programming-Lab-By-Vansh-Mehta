#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float a,b,r;
    printf("Whose Area or Perimeter do you want to find\nPress 1 for Square\nPress 2 for Rectangle\nPress 3 for Circle\n");
    scanf("%d",&x);

    if(x==1){
        printf("Select '1' for Area\nSelect '2' for Perimeter\n");
        scanf("%d", &y);
        if(y==1){
            printf("Enter the side of the square = ",a);
            scanf("%f",&a);
            printf("Area of the Square = %f", a*a);
        }
        else if(y==2){
            printf("Enter the side of the square = ",a);
            scanf("%f", &a);
            printf("Perimeter of Square is = %f", 4*a);
        }
        else{
            printf("Your Input is Wrong");
        }
    }
    else if(x==2){
        printf("Select '1' for Area\nSelect '2' for Perimeter\n");
        scanf("%d", &y);
        if(y==1){
            printf("Enter the Length of the Rectangle = ",a);
            scanf("%f", &a);
            printf("Enter the Breadth of the Rectangle = ",b);
            scanf("%f", &b);
            printf("Area of the rectangle is = %f", a*b);
        }
        else if(y==2){
            printf("Enter the Length of the Rectangle = ",a);
            scanf("%f", &a);
            printf("Enter the Breadth of the Rectangle = ",b);
            scanf("%f", &b);
            printf("Perimeter of the rectangle is = %f", 2*(a+b));
        }
        else{
            printf("Your Input is Wrong");
        }
    }
    else if(x==3){
        printf("Select '1' for Area\nSelect '2' for Circumference\n");
        scanf("%d", &y);
        if(y==1){
            printf("Enter the Radius of the Circle = ",r);
            scanf("%f",&r);
            printf("Area of the Circle is = %.3f",3.14*r*r);
        }
        else if(y==2){
            printf("Enter the Radius of the Circle = ",r);
            scanf("%f",&r);
            printf("Circumference of the Circle is = %.3f",3.14*2*r);
        }
        else{
            printf("Your Input is Wrong");
        }
    }
    else{
        printf("Your Input is Wrong");
    }
    return 0;
}