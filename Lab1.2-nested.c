#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float s = 0, d = 1;
    int n, counter = 5;

    scanf("%d", &n);

    for (int i = 1; i < n + 1; ++i) {

        for (int j = 1; j < i + 1; ++j){
            d *= (j + 1) * sin(j);
            counter += 6;
        }
        s += d / (i * (i + 1));
        d = 1;
        counter += 8;
    }

    printf("%.7f\n", s);
    printf("%d", counter);
    return 0;
}
