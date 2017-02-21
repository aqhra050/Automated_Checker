#include <stdio.h>
#include <ctype.h>
#define LENGTH 40

int main(void)
{
    char ans, correct[LENGTH], input[LENGTH];
    int i, count, score;

    for (i = 0; i < LENGTH; i++)
    {
        ans = ' ';
        while (!(ans >= 'A' && ans <= 'D'))
        {
            printf("%2i : \n", i + 1);
            scanf(" %c", &ans);
            ans = toupper(ans);
        }
        input[i] = ans;
    }

    i = 0;
    ans = ' ';
    while ((ans = getchar()) != EOF && i < LENGTH)
        if (ans >= 'A' && ans <= 'D')
        {
            correct[i] = ans;
            i++;
        }

    score = LENGTH;
    for (i = 0, count = 0; count < LENGTH / 2; i+= 2, count++)
            if (input[count] != correct[i])
            {
                score--;
                printf("%i ", count + 1);
            }

    for (i = 1, count = 20; count < LENGTH; i+= 2, count++)
            if (input[count] != correct[i])
            {
                score--;
                printf("%i ", count + 1);
            }

    printf("%i\n", score);
}
