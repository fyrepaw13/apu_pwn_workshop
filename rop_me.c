#include <stdio.h>
#include <stdlib.h>

void setup(){
  setvbuf(stdout, NULL, _IOLBF, 0);
  setvbuf(stdin, NULL, _IONBF, 0);
}

void ignore_me(){
  __asm__("pop %rdi; ret");
  __asm__("pop %rsi; ret");
  __asm__("pop %rdx; ret");
}

int win(int p1, int p2, int p3){
    char arr[0x80];
    FILE *f;

    if (p1 == 0x1337 && p2 == 0xc0ffee && p3 == 0x69){
        f = fopen("flag.txt", "r");
            if (f == NULL) {
                printf("Error opening the file.\n");
                return 1;
            }

            fgets(arr, 0x70, f);
            puts(arr);
    }
    else{
        printf("\nTrespasser detected!\n[*] ABORTING\n");
        exit(0);
    }

    return 0;
}


int main(){
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;
  char arr[64];

  setup();
  printf("Input\n>> ");
  gets(arr);

  return 0;
}

// gcc rop_me.c -o rop_me -std=c99 -no-pie