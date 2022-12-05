#include<stdio.h>

struct Student {
    int roll;
    char name[50];
    int age;
    float weight;
    };

int main()
{
    struct Student s2, s1 = {.weight = 75.6, .roll = 2015, .name = "ovinno", .age = 24};
    //printf("Enter Student 1 info: (roll, name, age, weight)\n");
    //scanf("%d %s %d %f", &s1.roll, &s1.name, &s1.age, &s1.weight);

    printf("Enter Student 2 info: (roll, name, age, weight)\n");
    scanf("%d %s %d %f", &s2.roll, &s2.name, &s2.age, &s2.weight);

    printf("Student 1 info: \n");
    printf("roll = %d\nname = %s\nage = %d\nweight = %f\n\n", s1.roll, s1.name, s1.age, s1.weight);
    printf("Student 2 info: \n");
    printf("roll = %d\nname = %s\nage = %d\nweight = %f\n\n", s2.roll, s2.name, s2.age, s2.weight);

    return 0;
}
