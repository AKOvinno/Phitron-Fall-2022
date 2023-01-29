#include<stdio.h>
int main()
{
    FILE* inputFile;
    FILE* outputFile;
    inputFile = fopen("input.txt", "r");
    if(inputFile == NULL) {
        printf("NOT FOUND\n");
        return 0;
    }
    outputFile = fopen("output.txt", "w");

    int ara[5];
    for(int i = 0; i < 5; i++) {
        fscanf(inputFile, "%d", &ara[i]);
    }
    for(int i = 0; i < 5; i++) {
        fprintf(outputFile, "%d ", ara[i]);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
