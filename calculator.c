#include <cs50.h>
#include <stdio.h>

int add(int a, int b);
int main(void)
{
    printf("This is my calculator\n");

    int x = get_int("x: ");
    int y = get_int("y: ");
    //int z = add(x, y);

    printf("%i\n", add(x, y));
}

//Scope- context in which variables exist
int add(int a, int b)
{
    return a + b;
}
