#include <stdio.h>

int main() {
  
  int n = 3;
  int m = 4;
  int il = 1;
  int jl = 1;
  int i2 = 2;
  int j2 = 3;
  
  int arr[3][4] = { {3, -2, 4, 9}, {0, 3, 10, 3}, {5, -4, -6, 0}};
  
  int max = arr[il][jl];

  for (int i = il; i <= i2; i++) {
       for (int j = jl; j <= j2; j++) {
          if (arr[i][j] > max) {
              max = arr[i][j];
          }
       }
   }
  
  printf("max: %d\n", max);

  return 0;
}