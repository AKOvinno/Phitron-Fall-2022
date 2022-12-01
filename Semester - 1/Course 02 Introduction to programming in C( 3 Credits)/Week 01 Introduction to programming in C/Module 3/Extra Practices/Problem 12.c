#include<stdio.h>

int main()
{
    int Roll, Physics, chemistry, Computer_Application, total_marks;
    float percentage;
    char Name[20];

    printf("Input the Roll Number of the student: ");
    scanf("%d", &Roll);
    printf("Input the Name of the student: ");
    scanf("%s", Name);
    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    scanf("%d %d %d", &Physics, &chemistry, &Computer_Application);

    total_marks = Physics+chemistry+Computer_Application;
    percentage = total_marks/3.0;

    printf("Roll No: %d\n", Roll);
    printf("Name of Student: %s\n", Name);
    printf("Marks in Physics %d\n", Physics);
    printf("Marks in Chemistry %d\n", chemistry);
    printf("Marks in Computer Application %d\n", Computer_Application);
    printf("Total Marks = %d\n", total_marks);
    printf("Percentage = %f\n", percentage);

    if(percentage>=60) {
        printf("Division = First\n");
    }
    else if(percentage >= 48 && percentage < 60) {
        printf("Division = Second\n");
    }
    else if(percentage < 48 && percentage >= 36) {
        printf("Pass\n");
    }
    else {
        printf("Fail\n");
    }
}
