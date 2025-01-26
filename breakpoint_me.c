#include <stdio.h>

int Function2(){return 0;}

int Function1(){
	Function2();
	return 0;
}

int main(){
	Function1();
	return 0;
}