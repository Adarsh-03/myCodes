#include <stdio.h>

void countingSort(int array[], int size) {
  int output[10];

  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }
  int count[10];

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

void printArray(int array[], int size) {
    printf("Sorted array ");
  for (int i = 0; i < size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
int main() {
  int n;
  printf("This code is written by ABHAY PANDEY //CS-A//2100320120004 \n");
  printf("Enter the size of array ");
  scanf("%d",&n);
  int array[n];
  printf("Enter the elements of array ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&array[i]);
  }
  
  countingSort(array, n);
  printArray(array, n);
}
