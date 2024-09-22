#include<stdio.h>
#include<time.h>
#define MOD 1000000

long long factorial(int n) {
    long long f = 1;
    for (int j = 1; j <= n; j++) {
        f = (f * j % MOD);
    }
    return f;
}

int main() {
    int input;
    long long sum = 0;
    scanf("%d", &input);

    if (input >= 25) input = 25;

    for (int i = 1; i <= input; i++) {
        printf("i = %d, f = %d\n", i, factorial(i));
        sum = (sum + factorial(i)) % MOD;
    }
    printf("Time used: %.2f\n", (double) clock() / CLOCKS_PER_SEC);
    printf("%d\n", (int) (sum % MOD));
    return 0;
}
