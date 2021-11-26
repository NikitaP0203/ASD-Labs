#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float a, b, R = 0;
    const int n;

    scanf("%d", &n);
    scanf("%f", &a);
    scanf("%f", &b);

    double Y[n];
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
        Y[i] = rand() % 100;

    printf("Початковий масив:\n ");

    for (int i = 0; i < n; ++i) {
        printf("%.1f  ", Y[i]);
    }

    double Z[n];
    printf("\nМасив Z:\n ");

    for (int i = 0; i < n; ++i) {
        if (Y[i] > 0 & Y[i] < 15){
            Z[i] = 2*a + Y[i]*Y[i];
        } else {
            Z[i] = 2 * b;
        }
        printf("%.2f  ", Z[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            R -= sqrt(10 * b + a * Z[i] * Z[i]);
        } else {
            R += sqrt(10 * b + a * Z[i] * Z[i]);
        }
    }

    printf("\nЗначення R = %.2f", R);
    return 0;
}
