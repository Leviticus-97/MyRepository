#include <stdio.h>
#include <string.h>
#include <ctype.h>

// manual reverse
void strrev_manual(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

// manual uppercase
void strupr_manual(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
}

// manual lowercase
void strlwr_manual(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

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
        printf("5. Reverse string\n");
        printf("6. Convert to uppercase\n");
        printf("7. Convert to lowercase\n");
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
                char rev[100];
                strcpy(rev, s1);
                strrev_manual(rev);
                printf("Reversed string: %s\n", rev);
                break;

            case 6:
                char upper[100];
                strcpy(upper, s1);
                strupr_manual(upper);
                printf("Uppercase: %s\n", upper);
                break;

            case 7:
                char lower[100];
                strcpy(lower, s1);
                strlwr_manual(lower);
                printf("Lowercase: %s\n", lower);
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
