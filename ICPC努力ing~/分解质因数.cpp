#include <stdio.h>

int test(int n); 

int main() {
    int n;
    scanf("%d", &n);

    if (test(n)) {
        printf("%d=%d", n, n);
    } else {
        printf("%d=", n);
        int i = 2;
        while (n > 1) {
            if (n % i == 0) {
                printf("%d", i);
                n /= i;
                if (n != 1) {
                    printf("x");
                }
            } else {
                i++;
            }
        }
    }

    return 0;
}

int test(int n) {

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
