#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], rev[100];
    int len, i;

    printf("Enter a string: ");
    scanf("%s", s1);

    printf("Enter another string for equality check: ");
    scanf("%s", s2);

    len = strlen(s1);
    printf("Length of string = %d\n", len);

    for (i = 0; i < len; i++)
        rev[i] = s1[len - 1 - i];
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);

    if (strcmp(s1, s2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    if (strcmp(s1, rev) == 0)
        printf("The string is a Palindrome\n");
    else
        printf("The string is not a Palindrome\n");

    if (strstr(s1, s2) != NULL)
        printf("Substring found in main string\n");
    else
        printf("Substring not found\n");

    return 0;
}