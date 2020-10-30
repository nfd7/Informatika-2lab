#include <stdio.h>
#define N 255
int main()
{
    int i, b, j = 0, c;
    char str[N];
    printf("Enter string: \n");
    fgets(str, N, stdin);
    printf("Enter letter: \n");
    c = getc(stdin);
    for (i = 0; str[i]; ++i)
    {
        if (str[i] == c)
        {
            if (i == 0 || ispunct(str[i - 1]) || isblank(str[i - 1]))
            {
                b = i;
                while (str[b] != '\n' && !ispunct(str[b]) && !isblank(str[b]))
                    ++b;
                for (j = i; j != b; ++j)
                    printf("%c", str[j]);
                putchar(' ');
            }
            i = j;
        }
    }
    return 0;
}