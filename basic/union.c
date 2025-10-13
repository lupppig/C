#include <stdio.h>
#include <string.h>

union
{
    float i;
    int d;
} u;

struct catalog_item
{
    int stock_number;
    double price;
    int item_type;
    union
    {
        struct
        {
            char title[12];
            char author[12];
            int num_pages;
        } book;

        struct
        {
            char design[23];
        } mug;

        struct
        {
            char design[23];
            int colors;
            int sizes;
        } shirt;
    } item;
};

typedef struct
{

    int kind;
    union
    {
        int i;
        double d;
    } u;
} Number;

int main(void)
{
    // u.i = 20;
    u.i = 3.42;
    printf("%f\n", u.i);
    printf("%d\n", u.d);

    struct catalog_item c;

    strcpy(c.item.book.title, "CatsMouse");

    printf("%s\n", c.item.shirt.design);
    printf("%s\n", c.item.mug.design);

    Number number_arr[1000];

    return 0;
}