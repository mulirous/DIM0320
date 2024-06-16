#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2) {
    return sqrt( ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)) );
}

int main() {
    float x1, x2;
    float y1, y2;

    printf("Digite as coordenadas dos pontos para verificar suas distancias ->\n");

    printf("Primeiro ponto\n");

    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);

    printf("Segundo ponto\n");

    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    float dist;

    dist = distancia(x1, y1, x2, y2);

    printf("%.4f", dist);    

    return 0;
}