#include <stdio.h>


int my_isalpha(char mark)
{
    if ((((mark) >= 'A') && ((mark) <= 'Z') || ((mark) >= 'a') && ((mark) <= 'z')))
        return 1;

    else
        return 0;
}

int UpperCase(int ch) {

    return (('a' <= ch) && (ch <= 'z')) ? ch - 32 : ch;
}


char* find_ch_word(char* dst, char* ptr, char ch) {
    *dst = '\0';
    while (*ptr) {
        for (; (!my_isalpha(*ptr)) && *ptr; *ptr++);
        if (UpperCase(*ptr) == UpperCase(ch)) {
            for (; my_isalpha(*ptr) && *ptr; *dst++ = *ptr++);
            *dst = '\0';
            return ptr;
        }
        else {
            for (; my_isalpha(*ptr) && *ptr; ptr++);
        }
    }
    return (*dst) ? ptr : NULL;
}

int  main(void) {
    char buf[32], * ptr;
    char str[255], ch;

    printf("Enter string:");
    gets(str);
    printf("Enter letter:");
    scanf("%c", &ch);

    if (my_isalpha(ch) == 1) {
        ptr = str;
        printf("Words beginning with letter '%c':\n", ch);
        while ((ptr = find_ch_word(buf, ptr, ch)) != NULL)
            puts(buf);
        getchar();
    }
    else {
        printf("Enter character(not a number) ");
    }

    return 0;

}