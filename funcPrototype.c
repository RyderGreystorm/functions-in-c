#include <stdio.h>

void sum(); //function declaration


int main(void)
{
    sum();

    return 0;
}

void sum()
{
    int a, b, sum;

    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d \n", sum);
}
