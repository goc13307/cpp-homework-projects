#include <stdio.h>
double fact(int n) {
    if (n == 0) return 1.0;
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
double combination(int m, int n) {
    return fact(n) / (fact(m) * fact(n - m)); 
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    double result = combination(m, n);
    printf("result = %.0f\n", result);
    return 0;
}
