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
    int t, i;
    fscanf(inputFile, "%d", &t);
    while(t--) {
        int n;
        fscanf(inputFile, "%d", &n);
        if(n > 0) {
            for(i = n; i >= -n; i--) {
                fprintf(outputFile, "%d ", i);
            }
        }
        else if(n < 0) {
            for(i = n; i <= -n; i++)
                fprintf(outputFile, "%d ", i);
        }
        fprintf(outputFile, "\n");
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}

