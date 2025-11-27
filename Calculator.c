#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    int choice;
    printf("Enter the two numbers:");
    scanf("%f %f",&a,&b);
    do
    {
    printf("---Simple Calculator---\n");
    printf("1. Choose different numbers\n2. Addition\n3. Subtraction\n4. Multiplication\n5. Division\n6. Power\n7. Square Root\n8. Exit\n");
    printf("Enter your choice (1-8):");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter two numbers:" );
                    scanf("%f %f",&a,&b);
                    break;
            case 2: printf("Result: %.2f\n",a+b);
                    break;
            case 3: printf("Result: %.2f\n",a-b);
                    break;        
            case 4: printf("Result: %.2f\n",a*b);
                    break;
            case 5: if(b!=0)
                    printf("Result: %.2f\n",a/b);
                    else
                    printf("Error: Division by zero not possible.\n");   
                    break;
            case 6: printf("Result: %.2f\n",pow(a,b));
                    break;
            case 7: printf("Result: Square root of %f is %.2f and square root of %f is %.2f\n", a, sqrt(a), b, sqrt(b));
                    break;
            case 8: printf("Exiting the calculator.\n");
                    break;
            default: printf("Invalid choice entered. Please enter 1-8.\n"); 
        }
    }
    while(choice!=8);
    return 0;
}