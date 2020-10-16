#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *p[] = {"abc", "def"};
    int num = sizeof(p) / sizeof(*p);
    for (int i = 0; i < num; i++){
        printf("%s\n", p[i]);
    }
    return 0;
}
