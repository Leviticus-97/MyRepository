#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    do {
        printf("\n===== String Menu =====\n");
        printf("1. Length of string\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Find character in string\n");
        printf("6. Find substring\n");
        printf("7. Split string by delimiter\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of s1: %lu\n", strlen(s1));
                printf("Length of s2: %lu\n", strlen(s2));
                break;

            case 2:
                char dest[100];
                strcpy(dest, s1);
                printf("Copied string: %s\n", dest);
                break;

            case 3:
                char result[200];
                strcpy(result, s1);
                strcat(result, s2);
                printf("Concatenated string: %s\n", result);
                break;

            case 4:
                int cmp = strcmp(s1, s2);
                if (cmp == 0)
                    printf("Strings are equal\n");
                else if (cmp < 0)
                    printf("s1 is less than s2\n");
                else
                    printf("s1 is greater than s2\n");
                break;

            case 5:
                char ch;
                printf("Enter character to find: ");
                scanf(" %c", &ch);
                char *pos = strchr(s1, ch);
                if (pos)
                    printf("Character '%c' found at position %ld\n", ch, pos - s1);
                else
                    printf("Character not found\n");
                break;

            case 6:
                char *sub = strstr(s1, s2);
                if (sub)
                    printf("'%s' found in '%s' at position %ld\n", s2, s1, sub - s1);
                else
                    printf("Substring not found\n");
                break;

            case 7:
                char delim[10];
                char temp[100];
                strcpy(temp, s1);
                printf("Enter delimiter: ");
                scanf("%s", delim);
                char *token = strtok(temp, delim);
                printf("Tokens:\n");
                while (token != NULL) {
                    printf("  %s\n", token);
                    token = strtok(NULL, delim);
                }
                break;

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 8);

    return 0;
}