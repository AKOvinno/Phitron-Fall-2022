#include<stdio.h>

int main()
{
    FILE* inputFile = fopen("input.txt", "r");
    if(inputFile == NULL) {
        printf("Input not found\n");
        return 0;
    }
    FILE* outputFile = fopen("output.txt", "r");
    if(outputFile == NULL) {
        printf("Output not found\n");
        return 0;
    }
    int n;
    fscanf(inputFile, "%d", &n);
    fprintf(outputFile, "%d\n", n);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
