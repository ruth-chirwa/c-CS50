#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What is X? ");
    int y = get_int("What is Y? ");

    if (x < y)
    {
        printf("X is less than y\n");
    }else 
    {
        printf("X is greater than y\n");
    }
}
