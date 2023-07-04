#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, m; 
  
    printf("Введіть розміри матриці [n] [m]: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m]; 

    srand(time(NULL));

    printf("Елементи матриці:\n");
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 201 - 100; 
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int count = 0;
    int elements[200];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int element = matrix[i][j];
            int u = 1; 

            for (int k = 0; k < count; k++) {
                if (element == elements[k]) {
                    u = 0;
                    break;
                }
            }

            if (u) {
                elements[count] = element;
                count++;
            }
        }
    }

    printf("Кількість різних елементів: %d\n", count);

    return 0;
}