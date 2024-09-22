#include<stdio.h>
int main() {
    for (int i = 32; i < 100; i++) {
        int n = i * i;
        int a = n / 1000;
        int b = (n / 100) % 10;
        int c = (n % 100) / 10;
        int d = (n % 10);

        if (a == b && c == d) {
            printf("%d\n", n);
        }
    }
}
