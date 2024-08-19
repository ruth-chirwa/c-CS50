#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(10);
}

void meow(int n)
{
    for (int i = 0; i < 10; i++)
    {
        printf("Meow\n");
    }
}
