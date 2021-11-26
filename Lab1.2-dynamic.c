#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int n, de = 2, counter = 7;
    float num = 2 * sin(1);
    double S = num / de;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++){
        num *= (i + 1) * sin(i);
        de = i * (i + 1);
        S += num / de;
        counter += 12;
    }

    printf("%.7f\n", S);
    printf("%d", counter);
    return 0;
}
