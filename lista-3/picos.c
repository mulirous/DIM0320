#include <stdio.h>

int picos(int n, int onda[]) {
    int picos = 0;
    
    for (int i = 0; i < n; i++) {
        int prev = onda[(i - 1 + n) % n];
        int next = onda[(i + 1) % n];
        if ((onda[i] > prev && onda[i] > next) || (onda[i] < prev && onda[i] < next)) {
            picos++;
        }
    }
    
    return picos;
}

int main() {
    int n;
    scanf("%d", &n);
    int onda[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &onda[i]);
    }
    printf("%d\n", picos(n, onda));
    return 0;
}