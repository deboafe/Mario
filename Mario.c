#include <stdio.h>
#include <cs50.h>

int get_height();
void build(int);


int main(void)
{
    int n = get_height();

    build(n);

}


// prompt user for a number between 1 to 8, inclusively
// continue to prompt user until valid number is obtain

int get_height()
{
    int h;
    do
    {
        h = get_int("type the height of Mario, number between 1 and 8\n");
    }
    while (((h > 0) && (h < 9)) == false);

    return (h);
}

// Build the pyramide
// right aligned

void build(int j)
{
    int a = 0, b = 0, c = 0;

    for (c = 1; c <= j; c++)
    {

        for (a = 0; a < (j - c); a++)
        {
            printf(" "); // creat space
        }
        for (b = 0; b < c ; b++)
        {
            printf("#");  // creat bricks
        }

        printf("\n");


    }
}


