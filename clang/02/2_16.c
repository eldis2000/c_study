#include <stdio.h>
int main()
{
    char str[4] = "abc";
    printf("%s\n", str);

    char str2[4];
    strcpy(str2, "def");
    printf("%s\n", str2);
}
