#include <stdio.h>
#include <string.h>


int znajdz_minimum(int *tab, int n) {
    int min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];

        }
    }
    printf("Minimum so far: %d\n", min);
    return min;
}



int main(void) {
    int n = 0;
    printf("Podaj ilosc liczb do wprowadzenia\n");
    scanf("%d", &n);
    printf("Podaj %d liczb całkowitych:\n", n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    znajdz_minimum(tab, n);
}
