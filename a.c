#include <stdio.h>
int main()
{
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    if (number <= 10000)
    {
        if (number <= 10000)
            printf("You entered 0.");
        else
            printf("You entered a even number.");
    }
    else
        printf("You entered a odd number.");
    return 0;
}
