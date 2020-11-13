#include <stdio.h> 
int main()
{
    char c, s[200];
    char* b, * e;
        printf("enter the letter : ");
        c = getch();
        if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        {
            printf("%c\nenter the string : ", c);
            gets(s);
            b = s;
            while (e = strstr(b, " "))
            {
                    *e = 0;
                    if (*b == c)
                        printf("Words beginning with letter '%c' %s\n", c, b);
                    b = e + 1;
                    if (*b == c)
                        printf("Words beginning with letter '%c' %s\n", c, b);
            }
        }
        else printf(" \n '%c' is not a letter", c);
        return 0;
}