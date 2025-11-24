#include <stdio.h>
#include <ctype.h>

#define KEY '&'

struct file_date
{
    unsigned int day : 5; // setting bit size field in struct
    unsigned int month : 4;
    unsigned int year : 7;
};

void print_date(unsigned short n);
union int_date
{
    unsigned short i;
    struct file_date fd;
};

typedef unsigned char BYTE;
typedef unsigned short WORD;

union
{
    struct
    {
        WORD ax, bx, cx, dx;
    } word;
    struct
    {
        BYTE al, ah, bl, cl, ch, dl, dh;
    } byte;
} regs;

int main(void)
{


    regs.byte.ah = 0x12;
    regs.byte.al = 0x34;

    printf("AX: %hx\n", regs.word.ax);


    // casting an address into a pointer
    BYTE *p;
    p = (BYTE *) 0x1000;
    printf("%x\n", p);
    // while ((orig_char = getchar()) != EOF)
    // {
    //     new_char = orig_char ^ KEY;
    //     if (isprint(orig_char) && isprint(new_char))
    //         putchar(new_char);
    //     else
    //         putchar(orig_char);
    // }

    print_date(822);
    return 0;
}

void print_date(unsigned short n)
{
    union int_date u;

    u.i = n;

    printf("%u/%u/%u\n", u.fd.month, u.fd.day, u.fd.year + 1980);
}