#include <stdio.h>
#include <string.h>

#define FIRST_NAME_LEN 10

struct person_name
{
    char first[FIRST_NAME_LEN + 1];
    char middle_initial;
    char last[FIRST_NAME_LEN + 1];
};

struct student
{
    struct person_name name;
    int id, age;
    char sex;
} student1, student12;

int main(void)
{
    strcpy(student1.name.first, "Fred");
    strcpy(student1.name.last, "Micah");

    struct student arr_student[100] =
        {
            {.age = 10, .id = 12, .sex = 'F', .name = {"micah", 'M', "malik"}},
        };
    return 0;
}