#include <math.h>
#include <stdio.h>
#define NMAX 10
void input(int *a, int *n);
int find(int *a, int n);
double mean(int *a, int n);
int main() {
    int n, data[NMAX];
    input(data, &n);
    int result = find(data, n);
    printf("%d \n", result);
    return 0;
}
void input(int *a, int *n) {
    scanf("%d", n);
    for (int *p = a; p - a < *n; p++) {
        scanf("%d", p);
    }
}
int find(int *a, int n) {
    double mean_v = mean(a, n);
    double standardDeviation = 0;
    for (int *p = a; p - a < n; p++) {
        standardDeviation += pow(*p - mean_v, 2);
    }
    standardDeviation = sqrt(standardDeviation / n);
    for (int *p = a; p - a < n; p++) {
        if (*p % 2 == 0 && *p >= mean_v && *p != 0 && *p >= mean_v - 3 * standardDeviation &&
            *p <= mean_v + 3 * standardDeviation) {
            return *p;
        }
    }
    return 0;
}
double mean(int *a, int n) {
    int sum = 0;
    for (int *p = a; p - a < n; p++) {
        sum += *p;
    }
    return (float)sum / n;
}
