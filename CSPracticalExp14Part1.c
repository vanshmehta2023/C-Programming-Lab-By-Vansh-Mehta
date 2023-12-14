#include <stdio.h>

int main() {
    FILE *fileWrite = fopen("example.txt", "w");
    if (!fileWrite) { perror("Error opening file for writing"); return 1; }

    fprintf(fileWrite, "Hello, this is a sample text written to the file.\nYou can add more lines here.\n");
    fclose(fileWrite);
    FILE *fileRead = fopen("example.txt", "r");
    if (!fileRead) { perror("Error opening file for reading"); return 1; }

    printf("Content of the file:\n");

    int ch;
    while ((ch = fgetc(fileRead)) != EOF) putchar(ch);

    fclose(fileRead);

    return 0;
}