#include "mergesort_mini.c"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PRINT_ARR(a,len) for(int i=0;i<len;i++) printf("%d%s", a[i], i<len-1 ? ", " : "")

void demo(int arr[], int len) {
  printf("Input: ");
  PRINT_ARR(arr,len);
  printf("\n");

  m(arr, 0, len);

  printf("Sorted: ");
  PRINT_ARR(arr, len);

  for(int i = 0 ; i < len - 1; i++) {
    if(arr[i] > arr[i+1]) {
      printf(" - FAILED");
      break;
    }
  }

  printf("\n\n");
}

int main() {
  srand(time(NULL));

  printf("(Press any key to generate tests...)\n\n");

  while (1) {
    int len = 1 + rand() % 10;
    int arr[len];

    for (int i = 0; i < len; i++) {
      arr[i] = rand() % 20 - 10;
    }

    demo(arr, len);

    getch();
  }
}
