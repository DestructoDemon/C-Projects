// calculator for two numbers

# include <stdio.h>
# include <math.h>

int main()
{
    int a,b,c,d;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5.Square\n");
    printf("6.Stop\n");
    printf("Choose operation to be performed(Enter the option number): ");
    scanf("%d",&c);

    if (c == 1){
        d = a+b;
        printf("Sum is %d",d);
    }
    else if (c == 2){
        d = a-b;
        printf("Difference is %d",d);
    }
    else if (c == 3){
        d = a*b;
        printf("Product is %d",d);
    }
    else if (c == 4){
        d = a/b;
        printf("Quotient is %d",d);
    }
    else if (c == 5){
        d = pow(a,b);
        printf("Square is %d",d);
    }
    else{
        printf("Thank You");
    }




    return 0;
}
