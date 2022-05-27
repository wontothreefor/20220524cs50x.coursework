#include <cs50.h>
#include <stdio.h>

void do_something(void);

int main(void)
{
    do_something();
}

void do_something(void)
{
    int step_count = get_int("Height? ");

    if (step_count > 0 && step_count < 9)
    {
        //print out steps according to input.
        for (int x = 0; x < step_count; x++)
        {
            printf("%.*s", (step_count - (x + 1)), "             ");
            printf("%.*s", (x + 1), "##############");
            printf("  ");
            printf("%.*s", (x + 1), "##############");
            printf("\n");
        }
    }
    else
    {
        return do_something();
    }
}
