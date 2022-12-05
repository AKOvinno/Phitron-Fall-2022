#include<stdio.h>
#include<string.h>

struct Student {
        char name[100];
        int roll;
        int age;
        float weight;
};

int main()
{
    int a;
    struct Student s;
    strcpy(s.name, "ovinno");
    s.roll = 2015;
    s.age = 24;
    s.weight = 65;

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Age: %d\n", s.age);
    printf("Weight: %0.2f\n", s.weight);

    return 0;
}
