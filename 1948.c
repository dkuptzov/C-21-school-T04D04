#include <stdio.h>

int nod(int b);

int main(void) {
    int x;
    scanf("%d", &x);
    if (x == 0) {
        printf("%d", 0);
        return 0;
    } else if (x < 0) {
        x *= -1;
    }
    int rez = nod(x);
    printf("%d", rez);
}

int nod(int x) {
    int x_origin = x;
    for (int i = x_origin; i >= 2; i--) {
        while (x > 0) {
            x = x - i;
        }
        if (x == 0) {
            int z = i;
            int count = 0;
            for (int j = i - 1; j >= 2; j--) {
                while (z > 0) {
                    z = z - j;
                }
                if (z == 0) {
                    count = 1;
                    break;
                }
                z = i;
            }
            if (count == 0) {
                return i;
            }
        }
        x = x_origin;
    }
}
