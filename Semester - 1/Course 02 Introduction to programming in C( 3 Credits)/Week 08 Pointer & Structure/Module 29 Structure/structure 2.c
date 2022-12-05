#include<stdio.h>

struct Student {
    int roll;
    char name[50];
    int age;
    float weight;
    };

int main()
{
    struct Student s1 = {15, "ovinno", 24, 65.6};
    struct Student s2 = {28, "Sobuj", 24, 105.6};

    printf("Student 1 info: \n");
    printf("roll = %d\nname = %s\nage = %d\nweight = %f\n\n", s1.roll, s1.name, s1.age, s1.weight);
    printf("Student 2 info: \n");
    printf("roll = %d\nname = %s\nage = %d\nweight = %f\n\n", s2.roll, s2.name, s2.age, s2.weight);

    return 0;
}
