#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	short a;

	printf("Enter an integer value: ");
	scanf("%hd", &a);

	a=a+1;

	printf ("Number of bits: %u bits\n", sizeof(short)*8);
	printf ("A in signed integer %d\n", a);
	printf ("A in unsigned integer %u\n",a);
	printf ("A in hexdecimal %X\n",a);


	return 0;
}

