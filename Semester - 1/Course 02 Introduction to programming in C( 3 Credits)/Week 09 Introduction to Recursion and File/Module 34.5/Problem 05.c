#include<stdio.h>
int main()
{
    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    int n, i, j, space;
    fscanf(inputFile, "%d", &n);
    for(i = 1; i <= n; i++) {
        for(space = n-i; space > 0; space--) {
            fprintf(outputFile, " ");
        }
        for(j = 1; j <= n; j++) {
            fprintf(outputFile, "#");
        }
        fprintf(outputFile, "\n");
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
