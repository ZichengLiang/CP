#include<stdio.h>

int isDaf(int n) {
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    if (a * a * a + b * b * b + c * c * c == n) {
        return 1;
    } else return 0;
}

int main() {
    for (int i = 100; i < 1000; i++) {
        if (isDaf(i)) printf("%d\n", i);
    }

    return 0;
}
