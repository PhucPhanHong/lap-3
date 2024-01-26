#include <stdio.h>
int sumDigits(int n) {
    int sum = 0;
    do {
        int remainder = n % 10;
        n = n / 10;
        sum += remainder;
    } while (n > 0);

    return sum;
}

int main() {
    int n, s;
    do {
        printf("nhap so nguyen: ");
        scanf("%d", &n);

        if (n >= 0) {
            s = sumDigits(n);
            printf("sum : %d\n", s);
        }
    } while (n >= 0);

    printf("ket thuc\n");

    return 0;
}

