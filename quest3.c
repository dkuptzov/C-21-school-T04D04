#include <stdio.h>

int fibo(int x, int y, int z);

int main(void) {
    int x = 0, y = 1, z;
    if (scanf("%d", &z) != 1) {
        printf("%s", "n/a");
    } else {
        z -= 1;
        int rez = fibo(x, y, z);
        printf("%d", rez);
        return 0;
    }
}

int fibo(int x, int y, int z) {
    if (z == 0) {
        return y;
    }
    int temp = x;
    x = y;
    y = y + temp;
    z--;
    fibo(x, y, z);
}
