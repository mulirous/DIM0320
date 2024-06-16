#include <math.h>
#include <stdio.h>

int calcularNumeroDeDigitos(int num) {
    int digitos = 0;
    while (num != 0) {
        num /= 10;
        digitos++;
    }
    return digitos;
}

void imprimirMatrizQuadrada(int n) {

  int matrix[n][n];
  
  matrix[0][0] = 1;

  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < n; j++) {
        matrix[i][j] = pow(2, (i+j));
    }
  }
  
  int maiorValor = matrix[n-1][n-1];
  int larguraColuna = calcularNumeroDeDigitos(maiorValor);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%*d ",larguraColuna, matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n;
  scanf("%d", &n);
  imprimirMatrizQuadrada(n);
  return 0;
}