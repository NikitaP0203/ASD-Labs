#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float x, y;
    scanf ("%f", &x);

    if (x<= -41) {
        y = (13 * x * x) / 11 - 6;
        printf("Значення функції дорівнює %.2f", y);
    } else {
        if (x > -21) {
            if (x <= 3) {
                y = -14 * x - 20;
                printf("Значення функції дорівнює %.2f", y);
            } else {
                if (x > 12) {
                    y = -14 * x - 20;
                    printf("Значення функції дорівнює %.2f", y);
                } else {
                    printf("No Value");
                }
            }
        } else {
            printf("No Value");
        }
    }
    return 0;
}
