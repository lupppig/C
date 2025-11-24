#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x, y;
};

struct rectangle
{
    struct point upper_left, lower_right;
};

struct
{
    union
    {
        char a, b;
        int c;
    } d;
    int e[5];
} f, *s = &f;

int main(void)
{
    struct rectangle *p = (struct rectangle *)malloc(sizeof(struct rectangle));
    if (!p)
        return -1;

    p->upper_left.x = 10;
    p->upper_left.y = 25;

    p->lower_right.y = 20;
    p->lower_right.x = 15;

    printf("upper left (%d, %d), lower right= (%d, %d)\n", p->upper_left.x, p->upper_left.y, p->lower_right.x, p->lower_right.y);

    s->e[3] = 10;
    (*s).d.a = '*';
    free(p);
    return 0;
}