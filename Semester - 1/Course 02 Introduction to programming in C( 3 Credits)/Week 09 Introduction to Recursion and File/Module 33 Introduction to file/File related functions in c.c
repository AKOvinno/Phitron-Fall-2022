#include<stdio.h>

int main()
{
    FILE* inputFile;
    inputFile = fopen("input.txt", "r");
    FILE* outputFile;
    outputFile = fopen("output.txt", "w");
    while(1) {
        char ch = fgetc(inputFile);
        if(ch == EOF)
            break;
        fputc(ch, outputFile);
    }
    return 0;
}
