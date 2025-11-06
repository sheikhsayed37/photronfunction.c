#include <stdio.h>

int char_to_ascii(char c)
{
    return c;
}

int main()
{
    char ch;
    scanf("%c", &ch);
    int ascii_value = char_to_ascii(ch);
    printf("%d\n", ascii_value);
    return 0;
}
