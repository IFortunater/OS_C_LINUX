#include <stdio.h>
#include <string.h>

// argc 命令字符串个数， argv保存命令字符串
int main(int argc, char const *argv[])
{
    printf("%d\n", argc);
    for (int i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }
    return 0;
}