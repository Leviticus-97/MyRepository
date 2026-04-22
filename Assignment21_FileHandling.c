#include <stdio.h>

int main()
{
    char buffer[100];
    FILE *source;
    FILE *destination;

    source = fopen("input.txt", "r");
    destination = fopen("output.txt", "w");

    fread(buffer, sizeof(char), 100, source);

    fwrite(buffer, sizeof(char), 100, destination);

    fclose(source);
    fclose(destination);

    printf("Text copied to file successfully");

    return 0;
}