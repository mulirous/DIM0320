#include <stdio.h>

void imprimirMatriz123(int n) {
  int matrix[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (i == j) matrix[i][j] = 1;
        else if(i + j == n - 1) matrix[i][j] = 2;
        else matrix[i][j] = 3;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n;
  scanf("%d", &n);
  imprimirMatriz123(n);
  return 0;
}