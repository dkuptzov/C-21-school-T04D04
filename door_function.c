#include <math.h>
#include <stdio.h>

int func_va(double x);
int func_bernulli(double x);
int func_giper(double x);

int main(void) {
    double pi = -3.1415927;
    for (int i = 0; i < 42; i++) {
        pi += 0.14953748;
        printf("%.7f", pi);
        printf(" | ");
        func_va(pi);
        func_bernulli(pi);
        func_giper(pi);
    }
}

int func_va(double x) {
    printf("%.7f", (x * x * x) / (1.0 + (x * x)));
    printf(" | ");
}

int func_bernulli(double x) {
    (sqrt(sqrt(1.0 + (4.0 * x * x)) - (x * x) - 1.0) != sqrt(sqrt(1.0 + (4.0 * x * x)) - (x * x) - 1.0))
        ? printf("-")
        : printf("%.7f", sqrt(sqrt(1.0 + (4.0 * x * x)) - (x * x) - 1.0));
    printf(" | ");
}

int func_giper(double x) {
    printf("%.7f", 1.0 / (x * x));
    printf("\n");
}
