#include<stdio.h>
int main()
{
    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    int n, i, sum = 0;
    fscanf(inputFile, "%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        fscanf(inputFile, "%d", &ara[i]);
        sum += ara[i] % 10;
    }
    fprintf(outputFile, "Sum = %d\n", sum);
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
