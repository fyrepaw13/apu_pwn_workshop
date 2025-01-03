#include <stdio.h>
#include <stdlib.h>

void setup(){
  setvbuf(stdout, NULL, _IOLBF, 0);
  setvbuf(stdin, NULL, _IONBF, 0);
}

int Function1(){
	char arr[16];

	printf("Function 1 is called!\n");
	gets(arr);

	return 0;
}

int secret_function(){
	printf("Secret function called!\n");

	return 0;
}

int main(){
	setup();
	Function1();

	return 0;
}

// gcc ret2win.c -o ret2win -std=c99 -no-pie