#include<stdio.h>
int main()
{
    FILE *inputFile, *outputFile;
    FILE *logFile = fopen("log.txt", "a");

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    int n;
    fscanf(inputFile, "%d", &n);
    if(n % 400 == 0) {
        fprintf(logFile, "%d-->YES\n", n);
    }
    else if(n % 100 == 0) {
        fprintf(logFile, "%d-->NO\n", n);
    }
    else if(n % 4 == 0) {
        fprintf(logFile, "%d-->YES\n", n);
    }
    else {
        fprintf(logFile, "%d-->NO\n", n);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
