#include <stdio.h>

enum suit
{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

typedef struct
{

    enum
    {
        INT_KIND,
        DOUBLE_KIND
    } kind;
    union
    {
        int i;
        double d;
    };
};

int main(void)
{
    
    return 0;
}