#include<stdio.h>
int main() {
    int n2, c = 0;
    scanf("%d", &n2);
    long long n = n2;

    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        ++c;
    }
    printf("%d\n", c);
    return 0;
}
