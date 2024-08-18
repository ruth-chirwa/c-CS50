#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you like Ice cream? ");

    if (c == 'y')
    {
        printf("Yes I do!\n");
    }
    else if (c == 'n')
    {
        printf("No I don't\n");
    }
}
