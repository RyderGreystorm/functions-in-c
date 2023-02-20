#include <stdio.h>

void func(int x, int y);  // function declaration
void func1(int *, int *); // declaring fucntion
int main(void)
{
    int x = 10;
    int y = 41;

    // calling func by value
    func(x, y);
    printf("x = %d, y = %d \n", x, y);

    // calling by reference
    int a, b;
    func1(&a, &b);

    return 0;
}

void func(int x, int y)
{
    x = 5;
    y = 7;

    printf("x = %d, y = %d called by value\n", x, y);
}

// pointer operation in this function
void func1(int *a, int *b)
{
    *a = 5;
    *b = 7;

    printf("x = %d, y = %d called by reference\n", *a, *b);
}