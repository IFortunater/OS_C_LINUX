#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *s = "I am your Father!";
    fputs(*s, stdout);
    return 0;
}
