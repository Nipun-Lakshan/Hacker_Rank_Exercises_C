#include <stdio.h>

int main()
{
    char str[100];
    puts("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    puts("\n\nHello, World!");
    printf("%s", str);
    return 0;
}