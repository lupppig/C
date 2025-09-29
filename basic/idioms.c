#include <stdio.h>

char *strcp(char *s1, const char *s2);
char *strcat(char *s, const char *s2);

int main(void)
{
    char s[10] = "Hello";
    const char s2[6] = "World";

    strcp(s, s2);
    printf("%s\n", s);

    printf("%s", s);
    strcat(s, s2);
    printf("%s\n", s);

    // multidimensional array
    char planets[][8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

    for (int i = 0; i < 9; i++)
        if (planets[i][0] == 'E')
            printf("%s begins with E\n", planets[i]);

    char *iplanets[] = {
        "Mercury",
        "Venus",
        "Earth",
        "Mars",
        "Jupiter",
        "Saturn",
        "Uranus",
        "Neptune",
        "Pluto",
    };

    for (int i = 0; i < 9; i++)
        if (iplanets[i][0] == 'M')
            printf("%s begins with M\n", planets[i]);
    return 0;
}

char *strcp(char *s1, const char *s2)
{
    char *p = s1;
    while (*p && *s2)
    {
        *p = *s2;
        s2++;
        *p++;
    }
    *p = '\0';
    return s1;
}

char *strcat(char *s, const char *s2)
{
    char *p = s;

    while (*p++)
        ;
    while (*p++ = *s2++)
        ;
    return s;
}
