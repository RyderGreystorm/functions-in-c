#include <stdio.h>

void sum()
{
    int a, b, sum;

    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d \n", sum);
}

int main(void)
{
    sum();
    printf("OPeration terminated \n");
    sum();
    
    return 1;
}