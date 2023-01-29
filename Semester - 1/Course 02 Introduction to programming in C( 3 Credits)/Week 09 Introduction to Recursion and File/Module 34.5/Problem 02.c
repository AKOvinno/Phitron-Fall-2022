#include<stdio.h>
int main()
{
    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if(inputFile == NULL) {
        printf("NOT FOUND\n");
        return 0;
    }
    int n;
    fscanf(inputFile, "%d", &n);
    for(int i = 0; i < n; i++) {
        fprintf(outputFile, "%d ", i+1);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
