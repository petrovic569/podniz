#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nizA[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nizA[i]);
    }

    int suma1 = 0;
    int suma2 = 0;

    for (int i = 0; i < n; i++) {
        if (nizA[i] < 0) {
            if (suma1 > suma2) {
                suma2 = 0;
            }

            if (suma2 != 0) {
                suma2 += nizA[i];
            }

            if (nizA[i] == n - 1) {
                break;
            }

            suma2 = suma1 + nizA[i];
            suma1 = 0;
        } else {
            suma1 += nizA[i];
        }
    }

    if (suma1 > suma2) {
        printf("%d", suma1);
    } else {
        printf("%d", suma2);
    }

    return 0;
}
