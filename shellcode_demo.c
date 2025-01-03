#include <stdio.h>
#include <stdlib.h>

void setup(){
	setbuf(stdin, NULL);
	setbuf(stdout, NULL);
}

int main(){
	char buffer[64];

	setup();

	printf("Heres a present for you : %p\n", &buffer);
	printf(">> ");
	gets(buffer);
	return 0;
}

// gcc shellcode_demo.c -o shellcode_demo -fno-stack-protector -z execstack -std=c99
