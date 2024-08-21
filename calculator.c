#include <cs50.h>
#include <stdio.h>

int add(void);
int main(void)
{
    printf("This is my calculator\n");

    int x = get_int("x: ");
    int y = get_int("y: ");
    int z = add();

    printf("%i\n", z);
}

int add(void)
{
    return x + y;
}
