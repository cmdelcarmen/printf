#include <stdio.h>

int main(void)
{

	int l1 = 0, l2 = 0;
	char *ptr = NULL;

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("1 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("%s", ptr);
	putchar('\n');
	l2 = _printf("%s", ptr);
	putchar('\n');
	printf("3 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("%c", 'C');
	putchar('\n');
	l2 = _printf("%c", 'c');
	putchar('\n');
	printf("4 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("Hello: %c. Hi!\n", 'Z');
	l2 = _printf("Hello: %c. Hi!\n", 'Z');
	printf("5 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("casting: %c\n", 48);
	l2 = _printf("casting: %c\n", 48);
	printf("6 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'c', 'k', "add ", "LOL", 'g', "g", "", "hi", 'r', ", Mary", '\n');
	l2 = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'c', 'k', "add ", "LOL", 'g', "g", "", "hi", 'r', ", Mary", '\n');
	printf("7 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l2 = _printf("%v");
	printf("\n7 _printf: %d \n", l2);
	putchar('\n');

	l1 = printf("%%");
	putchar('\n');
	l2 = _printf("%%");
	putchar('\n');
	printf("6 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("casting: %%\n");
	l2 = _printf("casting: %%\n");
	printf("6 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("casting: %c\n", 48);
	l2 = _printf("casting: %c\n", 48);
	printf("6 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("casting: %c\n", 48);
	l2 = _printf("casting: %c\n", 48);
	printf("6 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("%c", '\0');
	putchar('\n');
	l2 = _printf("%c", '\0');
	putchar('\n');
	printf("6 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l2 = _printf("%");
	printf("above: a %% by itself\n");
	printf("_printf: %d \n", l2);
	putchar('\n');

	l2 = _printf("%!\n");
	printf("l2 _printf: %d \n", l2);
	putchar('\n');

	l2 = _printf("%K\n");
	printf("K _printf: %d \n", l2);
	putchar('\n');	

	return (0);
}
