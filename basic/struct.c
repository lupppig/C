#include <stdio.h>
#include <string.h>

#define NAME_LEN 20
struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part1 = {540, "Disk drive", 10}, part2 = {914, "Printer Cable", 5};

struct
{
    char name[NAME_LEN + 1];
    int number;
    char sex;
} employee1 = {.name = "micheal", .number = 12, .sex = 'F'}, employee2 = {"daniel", 12, 'M'};

typedef struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} Part;

void print_part(const struct part p);
struct part build_part(int number, const char *name, int on_hand);

int main(void)
{
    part2.number = 258;

    printf("part 2 number: %d \n", part2.number);
    printf("employee name: %s| ", employee1.name);
    printf("employee number: %d| ", employee1.number);
    printf("employee sex %c \n", employee1.sex);

    scanf("%d", &part2.on_hand);

    part2 = part1;

    printf("part 2 number: %d\n", part2.number);

    const Part p1 = {20, "mark evans", 20};
    print_part(part1);
    print_part(part2);

    struct part p2 = build_part(20, "malik", 20);
    print_part(p2);
    return 0;
}

void print_part(const struct part p)
{
    printf("Part number: %d\n", p.number);
    printf("Part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.on_hand);
}

struct part build_part(int number, const char *name, int on_hand)
{
    struct part p;
    p.number = number;
    strcpy(p.name, name);
    p.on_hand = on_hand;
    return p;
}