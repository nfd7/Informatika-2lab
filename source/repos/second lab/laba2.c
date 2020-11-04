#include <stdio.h> 
int main()
{
    char c, s[200];
    char* b, * e;
    printf("enter the letter : ");
    c = getch();
    printf("%c\nenter the string : ", c);
    gets(s);
    b = s;
    while (e = strstr(b, " "))
    {
        *e = 0;
        if (*b == c) 
        printf("%s\n", b);
        b = e + 1;
    }
    if (*b == c)
    printf("%s\n", b);
}