# stdin 和 stdout

与stdin和stdout一同的还有stderr，但此处不提

stdin和stdout的全称分别是：standard input 和 standard output
也就是标准输入输出流

默认情况下，标准输入(stdin)就是从键盘读取，而标准输出(stdout)则是显示在屏幕上

因为在linux和unix中，一切皆文件，所以，也可将二者看作是特殊的文件，可以用FILE *指针指向stdin和stdout，从而直接从键盘获取数据，在显示屏上输出数据